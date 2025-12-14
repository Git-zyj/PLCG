#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44736;
unsigned long long int var_1 = 16358976636521484754ULL;
short var_2 = (short)1408;
unsigned long long int var_4 = 1278617028102161542ULL;
unsigned char var_5 = (unsigned char)214;
int var_6 = -600377299;
signed char var_8 = (signed char)24;
unsigned long long int var_9 = 13801670401484096434ULL;
short var_10 = (short)7967;
unsigned char var_11 = (unsigned char)103;
int var_12 = 433901742;
unsigned char var_13 = (unsigned char)24;
int zero = 0;
short var_18 = (short)-22557;
unsigned char var_19 = (unsigned char)197;
unsigned long long int var_20 = 14793511008971981484ULL;
unsigned char var_21 = (unsigned char)66;
unsigned long long int var_22 = 16132520837020865533ULL;
unsigned short var_23 = (unsigned short)57055;
unsigned long long int var_24 = 10303172712793322932ULL;
unsigned int var_25 = 2827893866U;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)54757;
unsigned short arr_1 [18] ;
unsigned short arr_2 [18] [18] ;
unsigned long long int arr_7 [18] [18] [18] ;
unsigned char arr_10 [18] [18] ;
unsigned int arr_11 [18] [18] [18] [18] [18] ;
unsigned short arr_12 [18] ;
signed char arr_13 [18] [18] [18] [18] [18] ;
unsigned char arr_3 [18] ;
unsigned int arr_4 [18] ;
signed char arr_17 [13] ;
_Bool arr_18 [13] ;
short arr_19 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)51360;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)7041;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 350133683992542631ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)95 : (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 1031575325U : 1053642572U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned short)429;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-48 : (signed char)71;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 775757314U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)-55 : (signed char)-38;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)-26571 : (short)-24438;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
