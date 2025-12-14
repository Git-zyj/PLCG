#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3127414440U;
int var_1 = 1428539349;
unsigned long long int var_2 = 14970003172173283200ULL;
signed char var_4 = (signed char)-61;
unsigned int var_5 = 2749629210U;
long long int var_6 = -1492437060227536836LL;
long long int var_8 = 2431090979240470834LL;
long long int var_9 = -6246909806323537435LL;
unsigned int var_10 = 1583513495U;
long long int var_11 = -2731765859480109724LL;
int var_12 = 1345618934;
signed char var_13 = (signed char)-99;
unsigned int var_14 = 663435295U;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 8157406714998049812LL;
unsigned long long int var_17 = 14079113911920004469ULL;
unsigned char var_18 = (unsigned char)88;
signed char var_19 = (signed char)-111;
long long int var_20 = -4621800374738345070LL;
long long int var_21 = -4378766181896830031LL;
unsigned char var_22 = (unsigned char)25;
_Bool var_23 = (_Bool)0;
unsigned char arr_0 [25] ;
signed char arr_1 [25] ;
unsigned long long int arr_2 [25] ;
_Bool arr_4 [20] [20] ;
long long int arr_6 [25] [25] ;
signed char arr_7 [25] ;
unsigned char arr_12 [22] [22] ;
unsigned char arr_3 [25] ;
signed char arr_8 [25] ;
int arr_9 [25] [25] ;
unsigned char arr_14 [22] [22] ;
_Bool arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 15509185373976343416ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = -3746496259621344579LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)78 : (signed char)63;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)68 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 1529186879 : 196629262;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
