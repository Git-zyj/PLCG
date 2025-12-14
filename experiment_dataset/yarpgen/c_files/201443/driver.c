#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7754517125155550670ULL;
signed char var_2 = (signed char)37;
signed char var_3 = (signed char)29;
int var_4 = 729112513;
unsigned int var_6 = 302352298U;
unsigned int var_7 = 1577949926U;
short var_8 = (short)-5703;
long long int var_9 = -9115689233906421315LL;
short var_10 = (short)11962;
unsigned char var_12 = (unsigned char)39;
int var_14 = 1710594912;
int zero = 0;
int var_15 = 1049246671;
unsigned int var_16 = 142038495U;
int var_17 = -697601145;
short var_18 = (short)-24747;
unsigned short var_19 = (unsigned short)42639;
short var_20 = (short)-5751;
short var_21 = (short)16194;
unsigned short var_22 = (unsigned short)59822;
unsigned int var_23 = 2500515746U;
unsigned short var_24 = (unsigned short)21318;
long long int arr_1 [18] ;
long long int arr_2 [18] [18] ;
unsigned short arr_4 [18] ;
signed char arr_5 [18] [18] ;
unsigned short arr_6 [18] [18] [18] [18] ;
int arr_7 [18] [18] ;
unsigned long long int arr_9 [14] [14] ;
short arr_14 [11] [11] ;
int arr_8 [18] [18] ;
unsigned char arr_11 [14] ;
short arr_18 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -4417557398764213455LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 9109570243819212088LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)52899;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41755;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 1341134896;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = 1022293256983472736ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (short)3881;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = -1524899278;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)21429 : (short)-24438;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
