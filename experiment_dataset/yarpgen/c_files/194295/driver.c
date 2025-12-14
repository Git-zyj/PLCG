#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24623;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 15339173296647331612ULL;
unsigned long long int var_3 = 14774083957804819722ULL;
int var_4 = 1600670331;
unsigned char var_5 = (unsigned char)55;
signed char var_6 = (signed char)-85;
int var_7 = 415628037;
int var_8 = 1297336043;
unsigned char var_9 = (unsigned char)14;
int zero = 0;
signed char var_10 = (signed char)-109;
int var_11 = 1446042360;
short var_12 = (short)20679;
unsigned long long int var_13 = 5663228939620537187ULL;
long long int var_14 = -4386250849102187633LL;
unsigned char var_15 = (unsigned char)35;
short var_16 = (short)-22444;
short var_17 = (short)-4979;
long long int var_18 = 491601122220765230LL;
unsigned long long int var_19 = 15812853205335585917ULL;
unsigned char var_20 = (unsigned char)111;
unsigned long long int var_21 = 12764405202978163495ULL;
unsigned long long int var_22 = 12723507033961821037ULL;
signed char var_23 = (signed char)78;
unsigned short var_24 = (unsigned short)50134;
unsigned short var_25 = (unsigned short)7586;
short var_26 = (short)2349;
_Bool var_27 = (_Bool)1;
long long int arr_0 [11] ;
unsigned short arr_1 [11] [11] ;
long long int arr_5 [12] [12] ;
unsigned long long int arr_6 [22] ;
signed char arr_9 [22] [22] [22] ;
long long int arr_16 [22] [22] [22] [22] ;
short arr_22 [14] ;
short arr_2 [11] ;
signed char arr_8 [22] ;
_Bool arr_25 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1879228542233095919LL : 6050237666640184128LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)23490;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = -5924205673545559307LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 81473342919024652ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -1584338856896032306LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (short)3843;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)27401 : (short)1210;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
