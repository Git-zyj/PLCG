#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)99;
short var_3 = (short)-22709;
long long int var_4 = 7678990060721300501LL;
long long int var_5 = -5602142866130194847LL;
unsigned char var_6 = (unsigned char)176;
unsigned int var_9 = 2313306688U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-7;
unsigned char var_12 = (unsigned char)209;
unsigned short var_13 = (unsigned short)24387;
int zero = 0;
long long int var_14 = 7949980545364958704LL;
unsigned short var_15 = (unsigned short)36974;
unsigned int var_16 = 1003138755U;
long long int var_17 = 1038614354628594248LL;
long long int var_18 = 7147305921428903767LL;
unsigned long long int var_19 = 2155696280744799372ULL;
unsigned char var_20 = (unsigned char)233;
int arr_0 [14] ;
_Bool arr_6 [22] ;
unsigned int arr_2 [14] ;
unsigned char arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 596389740;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 1425898182U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)183;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
