#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22819;
_Bool var_1 = (_Bool)0;
short var_2 = (short)29469;
_Bool var_3 = (_Bool)0;
short var_4 = (short)26273;
unsigned long long int var_5 = 7486556987302298264ULL;
unsigned short var_6 = (unsigned short)7494;
int var_7 = 2035136656;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)63122;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)22812;
int var_12 = -1130785621;
signed char var_13 = (signed char)60;
int var_14 = -785425627;
int zero = 0;
short var_15 = (short)5979;
unsigned long long int var_16 = 3356631527234351955ULL;
int var_17 = -337902893;
unsigned int var_18 = 3239227421U;
short var_19 = (short)-27814;
unsigned short var_20 = (unsigned short)35560;
unsigned short var_21 = (unsigned short)44984;
int var_22 = 1341445429;
int var_23 = -140802398;
_Bool var_24 = (_Bool)1;
int arr_0 [18] ;
short arr_2 [18] ;
unsigned long long int arr_5 [10] ;
int arr_6 [10] ;
int arr_7 [10] ;
unsigned short arr_8 [10] ;
int arr_11 [10] [10] [10] ;
unsigned short arr_13 [10] [10] [10] ;
int arr_15 [10] [10] [10] ;
unsigned short arr_19 [19] ;
unsigned short arr_20 [19] ;
int arr_21 [19] ;
unsigned short arr_22 [19] [19] ;
short arr_23 [19] ;
signed char arr_24 [19] [19] ;
_Bool arr_25 [19] [19] [19] ;
unsigned long long int arr_28 [19] [19] [19] ;
int arr_29 [19] ;
short arr_34 [19] [19] [19] ;
signed char arr_3 [18] [18] ;
unsigned int arr_4 [18] ;
short arr_9 [10] ;
int arr_16 [10] ;
unsigned short arr_17 [10] ;
int arr_18 [10] [10] ;
short arr_26 [19] ;
short arr_27 [19] [19] [19] ;
unsigned short arr_30 [19] [19] [19] ;
unsigned short arr_31 [19] [19] ;
unsigned short arr_35 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -351607636;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)6493;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 7796646180166795535ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -1515364129;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -825385741;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)34546;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 329531108;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)30035;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1693930018;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (unsigned short)57242;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (unsigned short)29597;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = 1692886656;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)38236;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (short)-19003;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 3049431254508709466ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = 980734179;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (short)16788;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 2091537028U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)5953;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -433736678 : 836407816;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44304 : (unsigned short)19817;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = -947133570;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (short)-1209;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (short)-3026;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned short)12872;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned short)46265;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (unsigned short)44000;
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
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
