#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11171;
long long int var_1 = 5315148193984954037LL;
int var_2 = 62723201;
long long int var_3 = -2201028252524506090LL;
unsigned long long int var_4 = 6135176348348043515ULL;
unsigned long long int var_5 = 1484567600189343233ULL;
long long int var_6 = 34813374532108680LL;
unsigned int var_7 = 2622427393U;
unsigned long long int var_9 = 17542404519111922199ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)12784;
unsigned long long int var_11 = 13155731496251140329ULL;
long long int var_12 = -814988772230417287LL;
int var_13 = -557272081;
unsigned int var_14 = 2127822744U;
unsigned short var_15 = (unsigned short)49277;
unsigned long long int var_16 = 7537141074727377402ULL;
unsigned short var_17 = (unsigned short)45540;
unsigned int var_18 = 1432104199U;
short var_19 = (short)17220;
unsigned int var_20 = 2508847239U;
unsigned int arr_1 [15] ;
short arr_5 [21] [21] ;
signed char arr_6 [21] [21] ;
signed char arr_7 [21] [21] [21] ;
short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 170789826U : 194940528U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-15535;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)-3549;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
