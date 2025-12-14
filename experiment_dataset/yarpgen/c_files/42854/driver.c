#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -7652169005359060669LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 7576090003809247008ULL;
unsigned int var_10 = 3494515972U;
unsigned int var_12 = 3301257098U;
unsigned short var_13 = (unsigned short)26323;
long long int var_15 = 6329655667769815456LL;
unsigned short var_17 = (unsigned short)23210;
int zero = 0;
int var_19 = 977643259;
int var_20 = -1085626172;
unsigned char var_21 = (unsigned char)141;
short var_22 = (short)-12823;
long long int var_23 = 5196422676935386781LL;
signed char var_24 = (signed char)87;
short var_25 = (short)-15033;
short var_26 = (short)-21588;
short var_27 = (short)28972;
unsigned long long int var_28 = 3844032533644779685ULL;
unsigned short var_29 = (unsigned short)37406;
signed char arr_0 [14] [14] ;
unsigned int arr_1 [14] ;
unsigned char arr_2 [14] [14] ;
unsigned char arr_7 [14] [14] ;
short arr_11 [22] ;
unsigned short arr_13 [22] [22] ;
unsigned long long int arr_18 [22] [22] ;
unsigned long long int arr_5 [14] [14] [14] ;
unsigned char arr_8 [14] [14] [14] ;
short arr_20 [22] [22] ;
unsigned long long int arr_21 [22] [22] ;
int arr_22 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2994619276U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (short)20961;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)48905 : (unsigned short)27551;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 5526206826144524234ULL : 13447725244605256660ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 9646110433404742407ULL : 171743420241498846ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)894 : (short)15173;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 16666830382747299436ULL : 2712176185798990809ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = -1404695296;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
