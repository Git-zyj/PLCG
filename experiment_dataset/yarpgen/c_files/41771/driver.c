#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1221853019;
long long int var_4 = -6208302883392859277LL;
unsigned char var_6 = (unsigned char)156;
unsigned long long int var_9 = 2274236932876436900ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)57487;
long long int var_13 = 3105412262619863306LL;
signed char var_14 = (signed char)108;
unsigned char var_16 = (unsigned char)198;
unsigned short var_17 = (unsigned short)55698;
int zero = 0;
short var_18 = (short)140;
unsigned short var_19 = (unsigned short)39783;
signed char var_20 = (signed char)35;
unsigned short var_21 = (unsigned short)11320;
short var_22 = (short)-23942;
unsigned short var_23 = (unsigned short)35775;
unsigned char var_24 = (unsigned char)27;
unsigned short var_25 = (unsigned short)21118;
long long int var_26 = -8851596438180396962LL;
unsigned char var_27 = (unsigned char)98;
long long int var_28 = -1129142032566051756LL;
_Bool arr_0 [13] ;
long long int arr_1 [13] ;
_Bool arr_2 [13] [13] ;
unsigned short arr_3 [13] [13] ;
signed char arr_4 [13] [13] [13] [13] ;
unsigned long long int arr_6 [13] [13] [13] [13] [13] ;
long long int arr_7 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_8 [13] [13] ;
unsigned short arr_9 [13] ;
unsigned short arr_13 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -781473341281011647LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)26990 : (unsigned short)48686;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 5878038735472553196ULL : 9275762435773019995ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 9075064581172725810LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 4072093637452088029ULL : 6677276448598385230ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18548 : (unsigned short)7211;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)23710;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
