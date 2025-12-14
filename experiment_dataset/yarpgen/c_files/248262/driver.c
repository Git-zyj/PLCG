#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)39;
unsigned int var_14 = 3074188553U;
unsigned char var_15 = (unsigned char)190;
int zero = 0;
unsigned long long int var_16 = 12140339865726149556ULL;
unsigned char var_17 = (unsigned char)98;
short var_18 = (short)-29171;
unsigned long long int var_19 = 11519239119554762523ULL;
signed char var_20 = (signed char)53;
_Bool var_21 = (_Bool)0;
unsigned long long int arr_0 [23] [23] ;
int arr_1 [23] ;
signed char arr_2 [10] ;
unsigned short arr_3 [10] [10] ;
int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 14066599381661251544ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 102720402;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)56857 : (unsigned short)994;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1217375370 : -1671285694;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
