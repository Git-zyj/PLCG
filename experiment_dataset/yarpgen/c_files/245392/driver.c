#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8914;
signed char var_3 = (signed char)23;
unsigned long long int var_4 = 12229225100963853127ULL;
long long int var_6 = -5441029852792196638LL;
unsigned char var_7 = (unsigned char)240;
unsigned char var_8 = (unsigned char)206;
unsigned long long int var_13 = 978186211568516673ULL;
int zero = 0;
short var_14 = (short)1978;
unsigned int var_15 = 3350320204U;
unsigned short var_16 = (unsigned short)35038;
unsigned char var_17 = (unsigned char)212;
unsigned short var_18 = (unsigned short)3043;
int var_19 = -2127502497;
long long int var_20 = -2004954467849379030LL;
unsigned long long int var_21 = 4206241818962628949ULL;
signed char arr_0 [24] [24] ;
unsigned short arr_1 [24] ;
int arr_3 [24] ;
int arr_4 [24] [24] ;
unsigned short arr_7 [10] ;
unsigned short arr_11 [18] ;
unsigned long long int arr_12 [18] [18] ;
signed char arr_5 [24] [24] ;
unsigned char arr_6 [24] [24] ;
unsigned char arr_14 [18] [18] ;
unsigned short arr_15 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)43584;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 272716342;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 1669331837;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)48934;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned short)47308;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 6741133021694602001ULL : 14355322241466465336ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)218 : (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31651 : (unsigned short)30566;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
