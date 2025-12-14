#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1608127189;
int var_1 = 662978010;
unsigned short var_3 = (unsigned short)40356;
unsigned int var_5 = 1408965633U;
int var_6 = 274054961;
int var_7 = 1594840491;
unsigned short var_9 = (unsigned short)51961;
int var_10 = -76723402;
unsigned short var_11 = (unsigned short)11703;
int zero = 0;
short var_12 = (short)-26616;
unsigned int var_13 = 2231923489U;
int var_14 = 1061661862;
unsigned short var_15 = (unsigned short)36308;
unsigned int var_16 = 3241014166U;
int var_17 = 140415471;
unsigned short var_18 = (unsigned short)51330;
int var_19 = -1115616893;
unsigned int var_20 = 4030560761U;
unsigned int var_21 = 2293429352U;
unsigned short var_22 = (unsigned short)43708;
unsigned short var_23 = (unsigned short)46311;
unsigned int var_24 = 3519708571U;
short var_25 = (short)28863;
short var_26 = (short)10753;
unsigned short var_27 = (unsigned short)3323;
unsigned int var_28 = 284690587U;
unsigned int arr_0 [23] [23] ;
unsigned short arr_1 [23] ;
short arr_2 [11] [11] ;
short arr_3 [11] ;
int arr_6 [11] ;
short arr_19 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1871320940U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7365 : (unsigned short)9221;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-19029;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)17321;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 214256305;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (short)-31355;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
