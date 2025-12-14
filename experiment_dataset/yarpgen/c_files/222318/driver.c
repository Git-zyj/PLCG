#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23426;
unsigned int var_3 = 1630519167U;
unsigned short var_4 = (unsigned short)48846;
long long int var_5 = 828200686624848870LL;
unsigned long long int var_6 = 14406437313975305123ULL;
int var_8 = -1512234406;
unsigned int var_9 = 279669844U;
unsigned char var_10 = (unsigned char)216;
int zero = 0;
int var_13 = 1043046226;
short var_14 = (short)-22045;
unsigned int var_15 = 922862003U;
unsigned long long int var_16 = 16028854780804476992ULL;
unsigned int var_17 = 2186419182U;
int var_18 = -2058970066;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 15987872340100231834ULL;
short arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
int arr_2 [13] [13] ;
short arr_3 [13] [13] ;
unsigned int arr_4 [13] [13] [13] ;
unsigned short arr_5 [13] [13] ;
short arr_6 [13] [13] ;
short arr_7 [13] [13] [13] ;
int arr_8 [13] ;
unsigned int arr_9 [13] [13] ;
short arr_10 [13] [13] [13] [13] [13] ;
_Bool arr_13 [13] [13] [13] [13] [13] ;
long long int arr_14 [13] [13] ;
unsigned int arr_21 [23] ;
unsigned long long int arr_22 [23] ;
long long int arr_23 [23] ;
short arr_24 [23] ;
unsigned int arr_15 [13] [13] [13] ;
short arr_16 [13] ;
short arr_20 [13] [13] ;
signed char arr_25 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-21276;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2012376757145281167ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 459200015;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-1144;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1748354455U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)10227;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)23012 : (short)23459;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)5082;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1608667656 : -638445499;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 2467325717U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)23122 : (short)12653;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = 7447734529663477608LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = 1027577787U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = 662185263690638293ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = 2357743303724939971LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = (short)-12921;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3266644230U : 3389727104U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (short)-8222;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)9097 : (short)28250;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (signed char)-101 : (signed char)54;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
