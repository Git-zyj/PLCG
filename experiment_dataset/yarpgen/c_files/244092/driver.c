#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
unsigned long long int var_1 = 2066457564263112874ULL;
int var_2 = -1396743571;
int var_3 = 754667391;
int var_4 = 2102435941;
unsigned int var_5 = 3816088573U;
int var_7 = -245542047;
unsigned char var_8 = (unsigned char)31;
unsigned long long int var_10 = 8465357373974424784ULL;
unsigned short var_11 = (unsigned short)7056;
short var_12 = (short)29925;
signed char var_14 = (signed char)108;
short var_15 = (short)4476;
unsigned short var_16 = (unsigned short)47530;
unsigned long long int var_17 = 17174086591693856460ULL;
unsigned char var_18 = (unsigned char)143;
long long int var_19 = 453691880803898068LL;
int zero = 0;
long long int var_20 = 8889434219699402035LL;
signed char var_21 = (signed char)0;
unsigned int var_22 = 396846693U;
unsigned int var_23 = 263541559U;
unsigned char var_24 = (unsigned char)31;
unsigned char var_25 = (unsigned char)232;
unsigned short var_26 = (unsigned short)7330;
int var_27 = 30320601;
short var_28 = (short)-25761;
unsigned char var_29 = (unsigned char)182;
int var_30 = -1447576665;
long long int var_31 = -2058437493044748446LL;
unsigned char var_32 = (unsigned char)179;
long long int arr_0 [23] [23] ;
unsigned char arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned int arr_5 [23] [23] [23] [23] ;
signed char arr_6 [23] [23] [23] ;
_Bool arr_9 [23] [23] [23] [23] ;
int arr_10 [23] ;
short arr_11 [23] [23] ;
unsigned char arr_18 [13] ;
unsigned int arr_4 [23] ;
unsigned long long int arr_12 [23] [23] [23] ;
_Bool arr_13 [23] [23] [23] ;
unsigned short arr_16 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -2052279189860569864LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)21376;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 4007904354U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -1373485425;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-2846;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 736882834U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 11993765442460074260ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)17081 : (unsigned short)14223;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
