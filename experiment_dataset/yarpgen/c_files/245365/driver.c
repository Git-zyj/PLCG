#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1580046055U;
int var_3 = -1331475563;
unsigned short var_4 = (unsigned short)65229;
unsigned char var_6 = (unsigned char)200;
long long int var_8 = -64386961588663870LL;
unsigned char var_10 = (unsigned char)249;
_Bool var_11 = (_Bool)0;
long long int var_13 = 9210200813136769273LL;
int var_14 = -1971290782;
signed char var_15 = (signed char)78;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 6828732323951615125ULL;
signed char var_19 = (signed char)-86;
long long int var_20 = -1456967832788451434LL;
signed char var_21 = (signed char)-12;
signed char var_22 = (signed char)26;
long long int var_23 = -3023894668346083922LL;
long long int var_24 = -2406596907507733581LL;
unsigned short var_25 = (unsigned short)44230;
signed char var_26 = (signed char)-64;
unsigned long long int var_27 = 7711575055003563977ULL;
signed char var_28 = (signed char)30;
unsigned int var_29 = 434978280U;
signed char var_30 = (signed char)87;
unsigned long long int var_31 = 2871365089312322950ULL;
_Bool var_32 = (_Bool)0;
unsigned long long int var_33 = 9506885167439166751ULL;
unsigned char var_34 = (unsigned char)241;
_Bool var_35 = (_Bool)0;
unsigned long long int var_36 = 15173841949329203883ULL;
unsigned long long int var_37 = 13482462397998891629ULL;
signed char var_38 = (signed char)-58;
long long int var_39 = -8608106130314318220LL;
unsigned int var_40 = 1116590171U;
_Bool arr_0 [21] ;
signed char arr_1 [21] ;
unsigned short arr_2 [21] [21] ;
short arr_3 [21] [21] ;
long long int arr_5 [20] ;
signed char arr_9 [20] [20] [20] ;
signed char arr_10 [20] [20] ;
_Bool arr_16 [19] [19] [19] [19] ;
long long int arr_18 [19] [19] [19] ;
unsigned long long int arr_20 [19] [19] [19] ;
long long int arr_29 [19] [19] [19] ;
_Bool arr_35 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)21053;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)23162;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -5948253054209124375LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 5744073600893261485LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 17353603051765155612ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = -1091672891036090580LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
