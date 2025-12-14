#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5548430675767383805ULL;
long long int var_1 = 2702154114724092036LL;
unsigned long long int var_2 = 11282084620437408715ULL;
long long int var_3 = -4590220777566001105LL;
int var_5 = 1604035629;
short var_6 = (short)-1989;
unsigned short var_7 = (unsigned short)1194;
int zero = 0;
short var_10 = (short)-10891;
unsigned long long int var_11 = 12481373648261323590ULL;
unsigned long long int var_12 = 14338635203895465626ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)12310;
unsigned char arr_0 [23] ;
_Bool arr_1 [23] ;
unsigned long long int arr_4 [12] ;
unsigned short arr_5 [12] [12] ;
signed char arr_6 [12] ;
long long int arr_7 [12] ;
unsigned long long int arr_10 [16] ;
unsigned char arr_11 [16] ;
long long int arr_2 [23] ;
unsigned char arr_3 [23] ;
long long int arr_12 [16] ;
int arr_13 [16] [16] ;
unsigned long long int arr_14 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 11770145314554638760ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)35981;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -3442414087120760460LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 14714342483258241817ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2064014797831438779LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = -2422285105193940145LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = -991282702;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 7941747154717667060ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
