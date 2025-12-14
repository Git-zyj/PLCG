#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2418676122U;
unsigned long long int var_1 = 5904529443822033881ULL;
unsigned long long int var_3 = 4853638172766476399ULL;
long long int var_4 = -6030551317439921222LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -4305948192298488472LL;
short var_8 = (short)26022;
unsigned int var_10 = 1085271387U;
unsigned int var_11 = 1135390163U;
int var_12 = -978469622;
unsigned long long int var_13 = 8387381977420056361ULL;
unsigned char var_14 = (unsigned char)199;
int zero = 0;
signed char var_17 = (signed char)117;
unsigned long long int var_18 = 7048613136147182725ULL;
signed char var_19 = (signed char)-32;
unsigned long long int var_20 = 6961743846831176422ULL;
unsigned int var_21 = 3755274150U;
unsigned long long int var_22 = 7466045627974380129ULL;
signed char var_23 = (signed char)-81;
unsigned long long int var_24 = 18368200013543686616ULL;
short arr_16 [25] [25] ;
unsigned long long int arr_21 [25] ;
unsigned short arr_22 [25] ;
signed char arr_10 [16] [16] ;
unsigned short arr_18 [25] ;
signed char arr_25 [25] ;
long long int arr_26 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-17825;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 17740660432338554707ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (unsigned short)63438;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)33 : (signed char)-61;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42303 : (unsigned short)35509;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (signed char)-93 : (signed char)-13;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -6872948936284945068LL : -6173087620832083305LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
