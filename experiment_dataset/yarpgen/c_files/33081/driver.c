#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9149;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)62044;
short var_3 = (short)17474;
unsigned long long int var_4 = 10243891313713947027ULL;
unsigned long long int var_5 = 5420319396163265885ULL;
short var_7 = (short)14160;
short var_8 = (short)27473;
unsigned long long int var_9 = 13570552424323852864ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)113;
unsigned char var_11 = (unsigned char)39;
int var_12 = -1749139157;
int var_13 = 293835715;
unsigned char var_14 = (unsigned char)127;
int var_15 = -1944228508;
short var_16 = (short)14902;
long long int var_17 = 9075106703222137828LL;
unsigned short var_18 = (unsigned short)16895;
short var_19 = (short)27303;
int arr_0 [25] ;
_Bool arr_1 [25] ;
unsigned char arr_4 [25] ;
unsigned short arr_5 [25] [25] [25] ;
unsigned long long int arr_6 [25] [25] [25] ;
short arr_8 [25] ;
unsigned char arr_12 [12] ;
unsigned long long int arr_13 [12] ;
_Bool arr_2 [25] [25] ;
unsigned char arr_9 [25] ;
long long int arr_14 [12] [12] ;
long long int arr_17 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 473737348;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)32090 : (unsigned short)62113;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 12855361942433890630ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)-19097;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 4863753196265826957ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)154 : (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = 3561041762576103196LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = -3631378083820349183LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
