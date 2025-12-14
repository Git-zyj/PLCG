#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_7 = 3317564539U;
long long int var_8 = 7885433727878645139LL;
long long int var_10 = -2478936662467302407LL;
short var_13 = (short)-18505;
unsigned int var_14 = 4029241464U;
int var_15 = 1950463406;
unsigned int var_17 = 3718300998U;
int zero = 0;
unsigned char var_18 = (unsigned char)253;
unsigned int var_19 = 4205456238U;
unsigned long long int var_20 = 7448295160130824540ULL;
unsigned long long int var_21 = 6232869732806022657ULL;
unsigned short var_22 = (unsigned short)16783;
int var_23 = 551062369;
unsigned long long int var_24 = 8889935189809149593ULL;
long long int var_25 = -4844297848244252582LL;
unsigned int var_26 = 163626997U;
unsigned char arr_0 [11] [11] ;
_Bool arr_1 [11] [11] ;
unsigned long long int arr_2 [11] ;
unsigned char arr_3 [11] ;
unsigned short arr_4 [11] ;
long long int arr_7 [11] [11] ;
long long int arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 11889101789170740249ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)15469;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 6511326028247422706LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 3143241870919584929LL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
