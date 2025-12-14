#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3809371016U;
unsigned int var_3 = 267856945U;
unsigned short var_4 = (unsigned short)7762;
int var_6 = 1238164566;
unsigned long long int var_7 = 7764148815600794171ULL;
int var_8 = -1303886880;
int var_9 = -945315959;
unsigned short var_10 = (unsigned short)931;
unsigned short var_12 = (unsigned short)27941;
unsigned short var_13 = (unsigned short)47072;
int zero = 0;
int var_14 = 1965084338;
unsigned long long int var_15 = 9132752740537023539ULL;
int var_16 = -1097565469;
long long int var_17 = -4531558083285553701LL;
signed char var_18 = (signed char)-3;
int var_19 = -1572359116;
int var_20 = 532457572;
unsigned short var_21 = (unsigned short)35815;
int var_22 = 1394422639;
int var_23 = -167430751;
signed char var_24 = (signed char)-16;
unsigned short var_25 = (unsigned short)23863;
signed char var_26 = (signed char)92;
long long int var_27 = 4833503412785559611LL;
int var_28 = -1939154240;
signed char var_29 = (signed char)83;
signed char var_30 = (signed char)-113;
unsigned short var_31 = (unsigned short)9424;
int arr_0 [23] ;
signed char arr_1 [23] ;
signed char arr_2 [23] ;
unsigned long long int arr_3 [23] [23] [23] ;
long long int arr_4 [23] [23] [23] ;
int arr_5 [23] [23] [23] ;
signed char arr_6 [23] [23] [23] [23] ;
signed char arr_7 [23] ;
signed char arr_8 [23] [23] [23] [23] ;
unsigned short arr_10 [10] ;
signed char arr_13 [20] [20] ;
int arr_14 [20] [20] ;
int arr_15 [20] [20] [20] ;
unsigned short arr_17 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 456096836;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1639613575277700267ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -392435282935341835LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1020174671;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned short)32070;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = 1577534173;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2096831640;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34630 : (unsigned short)33451;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
