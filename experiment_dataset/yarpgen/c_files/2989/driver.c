#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19674;
int var_2 = -1489075116;
int var_3 = 1331532421;
unsigned char var_7 = (unsigned char)18;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)109;
unsigned short var_11 = (unsigned short)3236;
int var_12 = -2129443352;
int var_13 = -1847897881;
int zero = 0;
unsigned short var_18 = (unsigned short)38973;
unsigned int var_19 = 1963841363U;
unsigned short var_20 = (unsigned short)53504;
unsigned short var_21 = (unsigned short)1706;
long long int var_22 = -1986291083548139813LL;
unsigned short var_23 = (unsigned short)16390;
unsigned short var_24 = (unsigned short)35760;
unsigned short var_25 = (unsigned short)36321;
unsigned int var_26 = 2807751385U;
int arr_0 [14] ;
int arr_1 [14] ;
unsigned int arr_3 [25] ;
int arr_4 [25] [25] ;
signed char arr_5 [25] ;
_Bool arr_6 [25] [25] ;
unsigned int arr_2 [14] ;
signed char arr_7 [25] ;
int arr_10 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -91774388;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -254058774;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1195888989U : 62224928U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 815113692;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 3600667460U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)5 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 755430916 : 475880207;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
