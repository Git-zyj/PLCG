#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4316;
int var_2 = -1015471890;
short var_3 = (short)-22875;
unsigned int var_4 = 3876435998U;
unsigned long long int var_5 = 16565985518902573427ULL;
unsigned long long int var_6 = 9913639558916490467ULL;
unsigned short var_7 = (unsigned short)12632;
unsigned short var_8 = (unsigned short)29595;
unsigned short var_10 = (unsigned short)3872;
unsigned int var_11 = 814355962U;
int zero = 0;
unsigned char var_12 = (unsigned char)122;
long long int var_13 = -7382651468851854582LL;
unsigned long long int var_14 = 10950429812179148465ULL;
short var_15 = (short)-23080;
unsigned int var_16 = 368920113U;
int var_17 = -642636946;
unsigned short var_18 = (unsigned short)42947;
short var_19 = (short)-3456;
signed char var_20 = (signed char)-124;
long long int var_21 = -5171143636630128048LL;
short var_22 = (short)-21365;
short var_23 = (short)565;
short var_24 = (short)25046;
unsigned long long int var_25 = 5616260420461589468ULL;
unsigned long long int var_26 = 9729872776667857954ULL;
short arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned int arr_2 [24] [24] ;
int arr_4 [24] [24] ;
unsigned char arr_6 [24] ;
short arr_7 [24] [24] ;
signed char arr_8 [24] [24] ;
int arr_13 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)17575;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 3733484066U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 1972296595;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-19269;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -2141175538 : 1767200224;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
