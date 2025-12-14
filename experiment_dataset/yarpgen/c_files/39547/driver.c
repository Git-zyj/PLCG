#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10737;
unsigned long long int var_3 = 11179315475183971008ULL;
unsigned short var_4 = (unsigned short)1527;
unsigned short var_6 = (unsigned short)53127;
short var_7 = (short)-20715;
unsigned short var_8 = (unsigned short)23524;
short var_9 = (short)2556;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-21797;
unsigned long long int var_12 = 3254692583999018358ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)-8504;
unsigned short var_15 = (unsigned short)32674;
short var_16 = (short)14814;
short var_17 = (short)-15305;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3596796527U;
unsigned long long int var_20 = 14316340500703016104ULL;
unsigned int var_21 = 2326603388U;
unsigned long long int var_22 = 17427210454265042015ULL;
unsigned long long int var_23 = 11681738760636126465ULL;
long long int var_24 = 3231717304669305196LL;
unsigned char var_25 = (unsigned char)167;
unsigned int var_26 = 2422205463U;
unsigned long long int var_27 = 3527518571291881130ULL;
unsigned short var_28 = (unsigned short)45162;
long long int arr_2 [19] ;
unsigned short arr_3 [19] ;
unsigned long long int arr_4 [19] ;
unsigned short arr_5 [19] [19] ;
short arr_7 [15] ;
signed char arr_8 [15] ;
signed char arr_12 [13] ;
_Bool arr_14 [13] ;
unsigned char arr_6 [19] ;
_Bool arr_9 [15] [15] ;
short arr_10 [15] ;
short arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -2653969521808272292LL : -5202910849129188191LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)65250;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6961063925175150843ULL : 13593541556049900566ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)46528;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)20208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)97 : (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (short)29690;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (short)15056;
}

void checksum() {
    hash(&seed, var_14);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
