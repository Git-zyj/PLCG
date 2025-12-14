#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 642633699U;
long long int var_4 = 1332566447825887148LL;
unsigned long long int var_5 = 13651730838186415960ULL;
signed char var_6 = (signed char)-25;
unsigned long long int var_7 = 18003351492522675785ULL;
int var_13 = 955424491;
unsigned int var_18 = 1014515768U;
int zero = 0;
unsigned long long int var_19 = 4910740014066810272ULL;
int var_20 = -1877568088;
int var_21 = -1343243602;
signed char var_22 = (signed char)-85;
signed char var_23 = (signed char)-4;
short var_24 = (short)-6415;
signed char var_25 = (signed char)126;
unsigned short var_26 = (unsigned short)55218;
unsigned int var_27 = 493766708U;
unsigned long long int var_28 = 3288288604269018990ULL;
long long int var_29 = -6677652204753888065LL;
_Bool arr_1 [16] ;
short arr_4 [24] ;
unsigned long long int arr_5 [24] ;
int arr_6 [24] [24] ;
_Bool arr_10 [24] ;
long long int arr_13 [14] [14] ;
unsigned long long int arr_14 [14] ;
unsigned long long int arr_2 [16] ;
int arr_7 [24] ;
signed char arr_11 [24] ;
unsigned long long int arr_12 [24] ;
unsigned char arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-31260;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 14186506377564084249ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 962522050;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = 814941499187396187LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 4824387353433260514ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 4148148326839921575ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -158412590;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 3328705188508740120ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (unsigned char)91;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
