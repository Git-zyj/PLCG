#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6447663678881753059ULL;
short var_2 = (short)-32513;
long long int var_3 = 577686228064163888LL;
signed char var_5 = (signed char)-97;
unsigned short var_6 = (unsigned short)62371;
int var_7 = -351864108;
unsigned int var_8 = 1377122043U;
short var_10 = (short)-7498;
unsigned char var_11 = (unsigned char)188;
short var_12 = (short)-24447;
unsigned short var_13 = (unsigned short)64460;
unsigned long long int var_15 = 17530042411225713697ULL;
unsigned char var_16 = (unsigned char)192;
unsigned short var_17 = (unsigned short)38882;
int zero = 0;
unsigned long long int var_18 = 637994693669940797ULL;
unsigned short var_19 = (unsigned short)46761;
unsigned short var_20 = (unsigned short)9107;
int var_21 = -1169079344;
int var_22 = 515212279;
int var_23 = -65741531;
signed char var_24 = (signed char)52;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)20;
short var_27 = (short)-7908;
unsigned long long int var_28 = 4590392735409321732ULL;
int var_29 = -612812236;
unsigned long long int var_30 = 15053450239629392766ULL;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 350248204U;
unsigned long long int var_33 = 8114400111439278253ULL;
unsigned char var_34 = (unsigned char)73;
unsigned short var_35 = (unsigned short)12623;
unsigned short var_36 = (unsigned short)21820;
int arr_0 [14] [14] ;
_Bool arr_1 [14] ;
unsigned short arr_3 [14] [14] ;
signed char arr_5 [14] [14] [14] [14] ;
unsigned short arr_6 [14] [14] [14] ;
unsigned char arr_9 [14] [14] ;
int arr_11 [14] [14] [14] ;
_Bool arr_17 [14] [14] [14] ;
int arr_18 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 1449402136;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)61655 : (unsigned short)12081;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)35574;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)56 : (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1947192081 : -403152940;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 1196021355 : -376936318;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
