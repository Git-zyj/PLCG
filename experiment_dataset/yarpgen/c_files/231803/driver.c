#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 37397250;
int var_3 = -587171714;
unsigned char var_5 = (unsigned char)40;
unsigned char var_8 = (unsigned char)122;
unsigned char var_11 = (unsigned char)172;
unsigned long long int var_12 = 6325764033686543683ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)90;
int var_14 = -1258881717;
unsigned long long int var_15 = 2026275351574080890ULL;
short var_16 = (short)31671;
short var_17 = (short)-26201;
short var_18 = (short)19050;
unsigned long long int var_19 = 15936871214379398228ULL;
int var_20 = 1902626430;
int arr_0 [15] ;
short arr_1 [15] ;
unsigned char arr_2 [15] ;
int arr_4 [15] ;
int arr_5 [15] ;
short arr_7 [15] ;
int arr_8 [15] ;
short arr_6 [15] ;
int arr_9 [15] ;
short arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1267712912 : -1222709960;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)5729;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -1695680700;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 922366164;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)7240;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -6100925;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)32302 : (short)15739;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = -1681709065;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)9622 : (short)-18764;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
