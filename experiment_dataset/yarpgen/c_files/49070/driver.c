#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)595;
long long int var_1 = 4374442619265588156LL;
unsigned char var_2 = (unsigned char)182;
unsigned short var_3 = (unsigned short)35292;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)65524;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)8563;
unsigned char var_9 = (unsigned char)214;
_Bool var_10 = (_Bool)1;
short var_11 = (short)684;
int zero = 0;
unsigned short var_12 = (unsigned short)35890;
int var_13 = 295645653;
short var_14 = (short)-22808;
unsigned long long int var_15 = 17370409687555640542ULL;
signed char var_16 = (signed char)47;
unsigned short var_17 = (unsigned short)58489;
unsigned long long int var_18 = 7973576718586110668ULL;
int var_19 = -349431078;
unsigned long long int var_20 = 12258025808811623247ULL;
short arr_0 [20] [20] ;
short arr_1 [20] ;
unsigned short arr_3 [21] ;
signed char arr_4 [21] [21] ;
short arr_6 [21] [21] [21] ;
long long int arr_7 [21] ;
_Bool arr_8 [21] ;
unsigned long long int arr_11 [21] ;
short arr_13 [21] [21] [21] [21] ;
unsigned char arr_14 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)6003;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-14529;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)4482;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)23183;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 3197437960523691685LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 14089334102449974381ULL : 12829048990818587705ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)-28400;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)139;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
