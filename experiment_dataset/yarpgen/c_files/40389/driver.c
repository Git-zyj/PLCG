#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)76;
long long int var_7 = -1401685160141609058LL;
long long int var_11 = -3617807716370297503LL;
signed char var_14 = (signed char)-73;
int zero = 0;
unsigned short var_16 = (unsigned short)47394;
signed char var_17 = (signed char)-93;
unsigned short var_18 = (unsigned short)44270;
unsigned char var_19 = (unsigned char)139;
unsigned short var_20 = (unsigned short)4597;
unsigned int var_21 = 401690030U;
unsigned char var_22 = (unsigned char)178;
unsigned int var_23 = 2997776745U;
signed char var_24 = (signed char)101;
unsigned long long int var_25 = 13077653074129921254ULL;
long long int var_26 = 2847757944665250751LL;
long long int var_27 = 3159298035942720586LL;
unsigned short var_28 = (unsigned short)34204;
unsigned long long int var_29 = 9269642468367867086ULL;
signed char arr_0 [23] ;
long long int arr_1 [23] ;
signed char arr_2 [23] ;
signed char arr_4 [23] [23] ;
long long int arr_6 [23] [23] [23] [23] ;
_Bool arr_7 [23] ;
unsigned short arr_10 [23] [23] [23] [23] ;
long long int arr_12 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_5 [23] [23] ;
unsigned long long int arr_8 [23] ;
_Bool arr_23 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -3137814450861260950LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -8228621786402517784LL : -6908479994297347071LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)27993 : (unsigned short)26036;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8003037259218664769LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 8663095450411539621ULL : 3831505335367632475ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 10700319698662978599ULL : 4403592317379159109ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
