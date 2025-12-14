#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 12039787472494836380ULL;
unsigned short var_2 = (unsigned short)9294;
unsigned char var_3 = (unsigned char)84;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2556809234U;
int var_7 = 1139212689;
unsigned char var_10 = (unsigned char)250;
int zero = 0;
unsigned long long int var_11 = 1113042005822277986ULL;
unsigned long long int var_12 = 16425664421976507606ULL;
unsigned long long int var_13 = 16466038901882495750ULL;
unsigned long long int var_14 = 6890389923050068043ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2307727135U;
unsigned long long int var_17 = 2007906233516064058ULL;
unsigned int var_18 = 1480699702U;
short arr_6 [18] [18] ;
short arr_7 [18] [18] ;
unsigned int arr_10 [15] ;
_Bool arr_16 [15] [15] [15] ;
unsigned int arr_17 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)16944 : (short)-13065;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-26910 : (short)-16589;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1804700296U : 401544938U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 409217856U : 3261363750U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
