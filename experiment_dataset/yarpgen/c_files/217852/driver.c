#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 97577742;
signed char var_1 = (signed char)3;
unsigned short var_3 = (unsigned short)41402;
signed char var_4 = (signed char)-80;
unsigned short var_5 = (unsigned short)41512;
unsigned int var_7 = 2277926676U;
unsigned int var_8 = 4082622368U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 774979258U;
short var_13 = (short)13834;
unsigned long long int var_14 = 5432484333111103396ULL;
unsigned char var_16 = (unsigned char)231;
short var_17 = (short)28422;
int zero = 0;
unsigned short var_18 = (unsigned short)23570;
unsigned int var_19 = 3986634842U;
unsigned char var_20 = (unsigned char)33;
unsigned short var_21 = (unsigned short)25738;
unsigned short var_22 = (unsigned short)12063;
long long int var_23 = 1706228201522539486LL;
long long int var_24 = -259993745426969466LL;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)255;
unsigned char arr_0 [25] ;
unsigned int arr_1 [25] [25] ;
unsigned char arr_2 [25] ;
short arr_3 [25] [25] ;
short arr_7 [25] ;
unsigned short arr_16 [19] [19] ;
long long int arr_4 [25] ;
long long int arr_5 [25] ;
_Bool arr_8 [25] ;
unsigned char arr_9 [25] ;
unsigned char arr_10 [25] [25] ;
_Bool arr_13 [24] ;
long long int arr_18 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 2532776948U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-5723;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)20182 : (short)-7302;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)25418;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -8475975950779401998LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 1701813955301239423LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)251 : (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)190 : (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = 2889064638231010552LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
