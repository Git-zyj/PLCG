#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11332;
unsigned char var_1 = (unsigned char)243;
unsigned short var_2 = (unsigned short)19570;
short var_5 = (short)13888;
unsigned char var_6 = (unsigned char)110;
unsigned long long int var_7 = 8614249043416147180ULL;
unsigned char var_13 = (unsigned char)242;
unsigned long long int var_14 = 2672610657585142622ULL;
long long int var_16 = -8123369373517503497LL;
int zero = 0;
unsigned char var_17 = (unsigned char)236;
long long int var_18 = 821497114417149786LL;
long long int var_19 = 8860500813979693355LL;
long long int var_20 = 5660316235526308341LL;
short var_21 = (short)-19020;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
long long int var_24 = -6782810663598448682LL;
int var_25 = -1226391511;
short var_26 = (short)18140;
unsigned char var_27 = (unsigned char)7;
short var_28 = (short)22315;
short var_29 = (short)-71;
_Bool var_30 = (_Bool)1;
short var_31 = (short)-18960;
short arr_0 [18] [18] ;
unsigned int arr_1 [18] ;
unsigned short arr_2 [18] [18] ;
_Bool arr_3 [18] [18] ;
int arr_5 [12] ;
unsigned char arr_7 [12] ;
short arr_8 [12] [12] ;
unsigned short arr_9 [21] [21] ;
_Bool arr_10 [21] ;
long long int arr_11 [21] [21] [21] ;
long long int arr_13 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)9576;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 4125308945U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)46361;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -2126219095 : 2042451915;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-26962;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)33295;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 4343323256053568692LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = -5595469882208074883LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
