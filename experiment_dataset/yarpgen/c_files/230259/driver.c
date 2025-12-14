#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4665005554050752211LL;
unsigned long long int var_3 = 5606874518513522974ULL;
short var_4 = (short)-31529;
short var_5 = (short)18074;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 395704227U;
unsigned short var_8 = (unsigned short)28774;
short var_9 = (short)-18384;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)14568;
int zero = 0;
unsigned char var_14 = (unsigned char)77;
signed char var_15 = (signed char)-86;
unsigned long long int var_16 = 13016078116503558003ULL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)11;
unsigned short arr_6 [11] [11] [11] ;
unsigned int arr_10 [11] ;
unsigned char arr_16 [14] ;
long long int arr_17 [14] ;
unsigned long long int arr_7 [11] [11] ;
unsigned char arr_14 [11] [11] ;
int arr_15 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)2982;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 1048278857U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = 2742055851531882567LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 9065465887546235309ULL : 16308696171769400380ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)69 : (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 1387766734 : 1880286521;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
