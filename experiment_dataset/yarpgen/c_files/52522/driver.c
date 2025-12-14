#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2900026771U;
int var_2 = -1737248584;
unsigned int var_3 = 421050542U;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1064590046U;
unsigned char var_7 = (unsigned char)238;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)65;
int var_15 = -1182376626;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 96893896U;
unsigned char var_18 = (unsigned char)181;
unsigned char var_19 = (unsigned char)207;
unsigned char var_20 = (unsigned char)75;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2942869524U;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 2863549064U;
unsigned int var_25 = 1912337522U;
_Bool var_26 = (_Bool)1;
unsigned int arr_0 [11] ;
_Bool arr_1 [11] ;
_Bool arr_2 [11] [11] ;
unsigned int arr_3 [11] ;
_Bool arr_4 [11] [11] ;
unsigned int arr_5 [11] [11] [11] ;
_Bool arr_6 [11] [11] ;
_Bool arr_7 [25] ;
unsigned int arr_8 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1529000503U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1526529628U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 945005970U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 852203832U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
