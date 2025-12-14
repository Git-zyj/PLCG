#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55673;
unsigned long long int var_1 = 5600348346509329418ULL;
unsigned long long int var_8 = 4439615555798622939ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -9039933211042258600LL;
long long int var_12 = -4933031485446473884LL;
unsigned short var_13 = (unsigned short)65234;
unsigned char var_14 = (unsigned char)1;
unsigned short var_15 = (unsigned short)11876;
unsigned short var_16 = (unsigned short)17517;
unsigned char var_17 = (unsigned char)45;
long long int arr_0 [11] ;
unsigned int arr_1 [11] ;
unsigned short arr_4 [23] ;
signed char arr_5 [23] ;
_Bool arr_2 [11] ;
unsigned short arr_3 [11] ;
unsigned short arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -895921764640784235LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1892595769U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)19850;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)23647;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)23407;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
