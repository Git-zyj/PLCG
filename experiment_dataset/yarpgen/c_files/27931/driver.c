#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12180792705675252907ULL;
unsigned char var_1 = (unsigned char)0;
unsigned short var_2 = (unsigned short)9268;
_Bool var_3 = (_Bool)1;
short var_4 = (short)8449;
unsigned int var_5 = 2748587525U;
long long int var_6 = -1256528578849646577LL;
long long int var_7 = 6906700940301974156LL;
unsigned int var_8 = 3123543850U;
short var_9 = (short)14796;
int zero = 0;
unsigned short var_10 = (unsigned short)36025;
unsigned int var_11 = 2657781834U;
long long int var_12 = -5209345414540143639LL;
signed char var_13 = (signed char)93;
unsigned char var_14 = (unsigned char)107;
short var_15 = (short)27768;
unsigned int var_16 = 3346145112U;
long long int var_17 = 5511859344027457116LL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2072759642U;
short var_20 = (short)-19692;
int arr_2 [24] ;
unsigned char arr_3 [24] ;
unsigned short arr_4 [24] [24] ;
short arr_8 [24] [24] ;
_Bool arr_6 [24] [24] ;
_Bool arr_9 [24] ;
unsigned short arr_10 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -6997661;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)51 : (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)37825 : (unsigned short)14538;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (short)29990;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)15656 : (unsigned short)54377;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
