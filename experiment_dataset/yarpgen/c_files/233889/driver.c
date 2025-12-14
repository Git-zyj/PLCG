#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 129990239;
long long int var_1 = 2148801408602632161LL;
unsigned int var_2 = 2609165431U;
long long int var_3 = 4972008777151647506LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 4267370990U;
signed char var_6 = (signed char)84;
unsigned char var_7 = (unsigned char)124;
short var_8 = (short)12270;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 11610613173050084618ULL;
unsigned int var_12 = 645811473U;
short var_13 = (short)19297;
unsigned short var_14 = (unsigned short)14863;
unsigned long long int var_15 = 4253903006901797781ULL;
unsigned short var_16 = (unsigned short)46496;
unsigned long long int var_17 = 14217608691632198271ULL;
int zero = 0;
long long int var_18 = -9073883751545080846LL;
unsigned char var_19 = (unsigned char)78;
unsigned long long int var_20 = 15280550197921580251ULL;
short var_21 = (short)-15801;
unsigned long long int var_22 = 17258205443867898801ULL;
long long int var_23 = -6357846354304240528LL;
unsigned short var_24 = (unsigned short)42822;
unsigned short var_25 = (unsigned short)3457;
unsigned int var_26 = 2516194281U;
unsigned short var_27 = (unsigned short)41775;
short var_28 = (short)14658;
unsigned short var_29 = (unsigned short)20857;
unsigned int arr_4 [13] [13] [13] ;
long long int arr_7 [13] [13] ;
short arr_8 [13] [13] [13] ;
int arr_9 [13] ;
_Bool arr_17 [20] [20] ;
unsigned long long int arr_18 [20] ;
unsigned short arr_21 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 326567508U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = -5186417248660706535LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)24693;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -2142963506;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = 8699478667209985654ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)48580;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
