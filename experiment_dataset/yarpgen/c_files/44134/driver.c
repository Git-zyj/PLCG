#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 787844208778804226ULL;
unsigned int var_2 = 2314301571U;
long long int var_6 = 8717549022590136032LL;
int var_7 = -112313918;
long long int var_13 = -2944114182890245236LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -850303672;
unsigned short var_16 = (unsigned short)16895;
short var_17 = (short)-18769;
unsigned short var_18 = (unsigned short)40913;
int var_19 = 1378306558;
unsigned long long int arr_1 [15] ;
unsigned short arr_2 [15] [15] ;
short arr_3 [15] ;
unsigned char arr_4 [15] ;
unsigned short arr_5 [15] [15] [15] ;
_Bool arr_6 [15] [15] ;
short arr_7 [15] [15] [15] ;
_Bool arr_8 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 6500865160102289336ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)22375;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)18627;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)32758;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)19672 : (short)31075;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
