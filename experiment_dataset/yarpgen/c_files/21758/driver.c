#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5923049600263323446LL;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)205;
signed char var_3 = (signed char)73;
unsigned char var_4 = (unsigned char)194;
unsigned int var_6 = 1277139855U;
int var_10 = -1329289958;
unsigned char var_11 = (unsigned char)247;
int zero = 0;
unsigned int var_12 = 1554442477U;
unsigned char var_13 = (unsigned char)79;
unsigned int var_14 = 3624803735U;
unsigned char var_15 = (unsigned char)107;
unsigned int var_16 = 4193313563U;
unsigned int var_17 = 3322595221U;
long long int var_18 = 2391759861650638782LL;
short var_19 = (short)20172;
unsigned int var_20 = 1409796706U;
long long int arr_0 [22] ;
int arr_1 [22] [22] ;
unsigned short arr_6 [18] ;
unsigned char arr_11 [16] ;
_Bool arr_2 [22] ;
unsigned char arr_3 [22] [22] ;
unsigned short arr_4 [22] ;
short arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -5111834618507429855LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 19832753;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)23635;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)13828;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)31097;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
