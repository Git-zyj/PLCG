#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
signed char var_1 = (signed char)90;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 608579562730839128ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -3472697818554269046LL;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)89;
int var_11 = 1670423946;
short var_13 = (short)-19666;
int zero = 0;
unsigned long long int var_15 = 11248088117474321682ULL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)2;
unsigned int var_19 = 3778577507U;
unsigned char var_20 = (unsigned char)155;
long long int var_21 = 1759403528916651497LL;
unsigned short var_22 = (unsigned short)52401;
unsigned char var_23 = (unsigned char)71;
signed char var_24 = (signed char)27;
unsigned char var_25 = (unsigned char)49;
unsigned long long int var_26 = 17938980842300809868ULL;
short var_27 = (short)28119;
short var_28 = (short)18910;
signed char var_29 = (signed char)112;
unsigned long long int var_30 = 826583942549757551ULL;
short arr_0 [14] ;
unsigned short arr_1 [14] [14] ;
unsigned long long int arr_3 [14] ;
_Bool arr_4 [14] [14] [14] ;
unsigned char arr_8 [14] [14] ;
_Bool arr_10 [14] ;
short arr_14 [14] [14] [14] ;
unsigned long long int arr_2 [14] ;
int arr_7 [14] [14] [14] ;
_Bool arr_15 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-7209;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)49318 : (unsigned short)41948;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1204660896173675768ULL : 6897036273832183876ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)183 : (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)-432;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 6128476074741922409ULL : 18207314981106764345ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -146988821 : 423541885;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
