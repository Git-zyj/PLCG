#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2691512388555644704ULL;
long long int var_2 = -8235467474066666255LL;
unsigned long long int var_3 = 12600979599504086936ULL;
unsigned char var_4 = (unsigned char)77;
short var_11 = (short)11405;
_Bool var_12 = (_Bool)0;
unsigned int var_16 = 2363037595U;
int zero = 0;
short var_17 = (short)22546;
long long int var_18 = 969304287224143554LL;
unsigned int var_19 = 3623288998U;
unsigned short var_20 = (unsigned short)57648;
long long int var_21 = 8679255562243988247LL;
short var_22 = (short)15225;
signed char var_23 = (signed char)-69;
short var_24 = (short)12702;
unsigned char arr_5 [23] ;
long long int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 3180288147665608563LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
