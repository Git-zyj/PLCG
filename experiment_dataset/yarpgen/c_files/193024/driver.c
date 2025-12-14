#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)92;
unsigned char var_9 = (unsigned char)179;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3089886901U;
unsigned short var_13 = (unsigned short)3998;
signed char var_14 = (signed char)-9;
short var_16 = (short)12581;
int zero = 0;
unsigned short var_18 = (unsigned short)30258;
unsigned char var_19 = (unsigned char)176;
long long int var_20 = -7013054040474801098LL;
signed char var_21 = (signed char)-24;
int var_22 = 235712999;
unsigned int var_23 = 3444873340U;
unsigned int arr_0 [22] ;
signed char arr_1 [22] ;
unsigned int arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 912059183U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1928031332U : 1041713614U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
