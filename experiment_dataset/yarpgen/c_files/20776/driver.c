#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 6319420511583526101ULL;
unsigned short var_5 = (unsigned short)29308;
unsigned long long int var_6 = 6930520927985947998ULL;
_Bool var_7 = (_Bool)1;
short var_10 = (short)26305;
unsigned short var_12 = (unsigned short)17199;
int zero = 0;
int var_13 = -117373778;
unsigned int var_14 = 2131450705U;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 844560335U;
int arr_0 [24] [24] ;
short arr_1 [24] ;
unsigned int arr_3 [24] ;
signed char arr_4 [24] ;
int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -2146147583;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-28641;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1765916067U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 2011585493;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
