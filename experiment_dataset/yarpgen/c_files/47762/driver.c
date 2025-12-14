#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)56643;
unsigned int var_5 = 2589881802U;
signed char var_6 = (signed char)-36;
unsigned char var_8 = (unsigned char)6;
short var_9 = (short)-18196;
unsigned int var_13 = 697197970U;
long long int var_14 = -6258358075180061642LL;
int zero = 0;
unsigned long long int var_15 = 11512897481886458567ULL;
signed char var_16 = (signed char)-92;
short var_17 = (short)-18574;
unsigned int var_18 = 636244242U;
signed char var_19 = (signed char)37;
unsigned short arr_0 [18] ;
unsigned long long int arr_2 [18] ;
unsigned int arr_4 [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)17106;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 5596423197556134148ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1776591375U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 5533923592491911020ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
