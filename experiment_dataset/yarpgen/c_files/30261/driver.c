#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5321448282741185247LL;
unsigned int var_1 = 2288600064U;
short var_2 = (short)13534;
short var_3 = (short)25782;
long long int var_4 = -1983786413208449619LL;
unsigned int var_5 = 3393147246U;
unsigned short var_6 = (unsigned short)9718;
unsigned char var_7 = (unsigned char)78;
unsigned short var_8 = (unsigned short)35442;
unsigned char var_9 = (unsigned char)229;
unsigned char var_10 = (unsigned char)155;
signed char var_12 = (signed char)-9;
long long int var_13 = 7688129049572514818LL;
unsigned char var_14 = (unsigned char)6;
int zero = 0;
signed char var_15 = (signed char)78;
short var_16 = (short)-22311;
long long int var_17 = 5922721677797294352LL;
unsigned long long int var_18 = 10386647798418735973ULL;
unsigned int var_19 = 1720874390U;
unsigned short var_20 = (unsigned short)61413;
short var_21 = (short)-12937;
unsigned short var_22 = (unsigned short)38104;
int var_23 = 1416784075;
short var_24 = (short)-3337;
unsigned int var_25 = 2110519308U;
signed char var_26 = (signed char)-100;
unsigned int var_27 = 1603889498U;
short var_28 = (short)-29377;
unsigned char var_29 = (unsigned char)111;
unsigned long long int var_30 = 10502638266346123055ULL;
int var_31 = 1222069237;
long long int var_32 = -8476519633187892339LL;
long long int var_33 = -4307611225761991300LL;
unsigned char var_34 = (unsigned char)146;
unsigned long long int var_35 = 9131587451012046264ULL;
short var_36 = (short)-11133;
long long int var_37 = -5019900980990870950LL;
short var_38 = (short)-25637;
_Bool arr_2 [17] ;
signed char arr_5 [25] ;
signed char arr_7 [25] [25] ;
signed char arr_8 [25] ;
unsigned char arr_10 [25] [25] ;
unsigned int arr_11 [25] ;
int arr_14 [25] [25] [25] [25] ;
int arr_15 [25] ;
int arr_18 [25] [25] [25] ;
unsigned long long int arr_26 [25] [25] [25] ;
unsigned long long int arr_30 [24] ;
long long int arr_4 [17] ;
int arr_20 [25] [25] [25] ;
int arr_21 [25] [25] ;
signed char arr_27 [25] [25] [25] ;
signed char arr_28 [25] [25] ;
unsigned long long int arr_31 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)12 : (signed char)70;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 463734836U : 178921905U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -1456177496;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -1799040762 : -1238377559;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -912203032;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9170009390241150375ULL : 9815131936426809519ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = 9003545722887236492ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -2477489458245633847LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1603473619 : -1502942517;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? -1120603324 : -835927625;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-99 : (signed char)73;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-62 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = 6843994667043311588ULL;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
