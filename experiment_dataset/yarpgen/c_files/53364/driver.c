#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20765;
long long int var_1 = -4240978360819279461LL;
long long int var_2 = -6344787446864136532LL;
unsigned long long int var_3 = 2406811372594650497ULL;
unsigned int var_4 = 91123027U;
unsigned char var_5 = (unsigned char)249;
unsigned char var_6 = (unsigned char)94;
unsigned long long int var_8 = 15490246716558550286ULL;
unsigned char var_12 = (unsigned char)157;
long long int var_13 = -7180060960730150402LL;
int zero = 0;
unsigned int var_14 = 3213391739U;
short var_15 = (short)32246;
unsigned int var_16 = 1253006009U;
unsigned char var_17 = (unsigned char)42;
int var_18 = -490643296;
short var_19 = (short)7600;
int var_20 = -1662507693;
short arr_0 [19] ;
_Bool arr_1 [19] [19] ;
int arr_2 [19] ;
_Bool arr_4 [19] [19] ;
short arr_6 [19] ;
unsigned int arr_10 [19] ;
_Bool arr_5 [19] ;
unsigned short arr_8 [19] ;
unsigned int arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-31331;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 835557294;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)1970;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 2345114080U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned short)64016;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 353827260U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
