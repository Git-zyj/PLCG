#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
short var_1 = (short)14034;
unsigned char var_2 = (unsigned char)10;
unsigned short var_4 = (unsigned short)14132;
int var_5 = -837219745;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 9691167041660232573ULL;
unsigned int var_9 = 3289372825U;
long long int var_11 = 5699816384271437371LL;
int zero = 0;
unsigned long long int var_12 = 10649001647426360763ULL;
unsigned char var_13 = (unsigned char)61;
unsigned char var_14 = (unsigned char)207;
short var_15 = (short)-17956;
_Bool arr_0 [14] ;
signed char arr_1 [14] ;
unsigned char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)191;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
