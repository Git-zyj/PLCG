#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2136127841480777631ULL;
short var_1 = (short)-30997;
_Bool var_2 = (_Bool)1;
short var_3 = (short)12775;
short var_4 = (short)1927;
short var_5 = (short)-523;
int var_6 = 1874048016;
unsigned int var_7 = 2246500503U;
unsigned int var_8 = 3053951097U;
int var_9 = 811281677;
unsigned char var_10 = (unsigned char)163;
short var_11 = (short)31922;
int var_12 = -267805013;
unsigned char var_13 = (unsigned char)246;
short var_14 = (short)16234;
int zero = 0;
unsigned char var_15 = (unsigned char)238;
short var_16 = (short)-10497;
short var_17 = (short)-22790;
short var_18 = (short)-5301;
_Bool var_19 = (_Bool)0;
short var_20 = (short)22045;
short var_21 = (short)18082;
short var_22 = (short)-9213;
unsigned char var_23 = (unsigned char)156;
unsigned short var_24 = (unsigned short)18639;
short var_25 = (short)5222;
unsigned long long int arr_0 [14] [14] ;
short arr_1 [14] ;
short arr_4 [13] ;
unsigned short arr_6 [20] [20] ;
short arr_7 [20] ;
short arr_8 [20] [20] ;
_Bool arr_9 [20] ;
_Bool arr_10 [10] [10] ;
_Bool arr_11 [10] [10] ;
unsigned char arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 859364122936158302ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-30167;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)23694;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)20808;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (short)-4104;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (short)1088;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 3414775553U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
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
