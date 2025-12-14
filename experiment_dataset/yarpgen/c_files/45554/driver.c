#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34644;
short var_1 = (short)-27170;
unsigned long long int var_2 = 9193160335969240392ULL;
int var_3 = 708317546;
unsigned int var_4 = 882572700U;
unsigned int var_5 = 1008099081U;
unsigned long long int var_6 = 14523930192384029856ULL;
unsigned long long int var_7 = 7773665541571891014ULL;
unsigned short var_8 = (unsigned short)3108;
unsigned char var_9 = (unsigned char)41;
int zero = 0;
unsigned int var_10 = 19166323U;
long long int var_11 = 5736126581485988817LL;
int var_12 = 1144460491;
unsigned int var_13 = 122916874U;
short var_14 = (short)32373;
short var_15 = (short)28347;
long long int var_16 = 1978697234270897258LL;
int var_17 = -1515765579;
unsigned char var_18 = (unsigned char)201;
unsigned short var_19 = (unsigned short)18345;
unsigned int var_20 = 3413179516U;
int var_21 = -1725450421;
unsigned short var_22 = (unsigned short)34919;
unsigned short arr_3 [13] ;
long long int arr_4 [13] ;
unsigned int arr_7 [16] [16] ;
unsigned char arr_21 [16] ;
int arr_22 [16] [16] [16] ;
unsigned long long int arr_28 [20] ;
_Bool arr_29 [20] [20] ;
unsigned short arr_30 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)4263;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -2190903553720727290LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1060803358U : 4173574539U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned char)52 : (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1051946673 : 409023755;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = 14917010178964484871ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)47244;
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
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
