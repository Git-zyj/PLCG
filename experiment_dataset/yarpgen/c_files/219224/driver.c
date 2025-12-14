#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
int var_1 = 1702740678;
long long int var_2 = 5952702624133832258LL;
long long int var_4 = 5317107537714586401LL;
int var_5 = 672657534;
unsigned int var_6 = 1925877748U;
int var_7 = 2048933913;
_Bool var_8 = (_Bool)0;
int var_9 = 1954735303;
long long int var_10 = 1415998956081992058LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1627536180U;
unsigned long long int var_13 = 13936754312510802319ULL;
short var_14 = (short)2629;
int zero = 0;
unsigned char var_15 = (unsigned char)185;
signed char var_16 = (signed char)-61;
unsigned long long int var_17 = 11183989030502575338ULL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)245;
short var_20 = (short)11602;
signed char var_21 = (signed char)76;
long long int var_22 = 811451658348377122LL;
_Bool var_23 = (_Bool)1;
int var_24 = -979797651;
unsigned int var_25 = 3921078429U;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)121;
signed char var_28 = (signed char)79;
int var_29 = -1331700722;
short var_30 = (short)13337;
signed char var_31 = (signed char)-40;
unsigned long long int arr_0 [23] ;
short arr_1 [23] [23] ;
long long int arr_3 [22] ;
int arr_4 [22] ;
long long int arr_7 [22] ;
short arr_9 [22] ;
unsigned short arr_11 [22] [22] [22] ;
unsigned long long int arr_12 [22] [22] ;
unsigned short arr_15 [22] [22] [22] [22] ;
signed char arr_16 [22] [22] ;
int arr_2 [23] [23] ;
unsigned short arr_6 [22] [22] ;
int arr_17 [22] [22] [22] [22] ;
unsigned int arr_18 [22] ;
unsigned long long int arr_19 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 7954187211300123975ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)24930;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 6421753812792979997LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1025385392 : 1813633921;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -5152801417492412522LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)27560 : (short)-7448;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)31406;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = 6878348409384754444ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62144;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)63 : (signed char)70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -1901563892 : -1893711744;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)43118 : (unsigned short)45193;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1486993826 : 1740692266;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 3353572997U : 2183375616U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = 14451024465872076987ULL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
