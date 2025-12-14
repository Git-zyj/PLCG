#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1410247940U;
int var_1 = -1703735130;
long long int var_2 = 4119836899881701660LL;
signed char var_3 = (signed char)-121;
unsigned short var_4 = (unsigned short)19469;
int var_5 = -566021774;
unsigned long long int var_6 = 294877962825196347ULL;
int var_7 = -567221797;
signed char var_11 = (signed char)92;
unsigned char var_12 = (unsigned char)223;
unsigned char var_13 = (unsigned char)36;
unsigned long long int var_14 = 15944800584401044736ULL;
long long int var_15 = -5029850844135831516LL;
int var_16 = -1217662657;
unsigned short var_17 = (unsigned short)13307;
signed char var_18 = (signed char)-103;
int var_19 = -1401868778;
int zero = 0;
signed char var_20 = (signed char)-42;
short var_21 = (short)29840;
signed char var_22 = (signed char)101;
int var_23 = 892050133;
signed char var_24 = (signed char)-50;
long long int var_25 = 438194241186264569LL;
_Bool var_26 = (_Bool)0;
short var_27 = (short)25023;
unsigned int var_28 = 198495166U;
signed char var_29 = (signed char)0;
unsigned short var_30 = (unsigned short)54273;
int var_31 = -1466575629;
unsigned int var_32 = 2623667502U;
signed char var_33 = (signed char)-99;
_Bool var_34 = (_Bool)1;
signed char var_35 = (signed char)-97;
unsigned long long int arr_3 [23] ;
int arr_12 [11] ;
long long int arr_17 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 2165726720274405161ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 180390313;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -2822162963482232156LL;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
