#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)229;
short var_1 = (short)1450;
unsigned long long int var_2 = 12907649587164278890ULL;
signed char var_3 = (signed char)125;
unsigned int var_5 = 4265710148U;
signed char var_7 = (signed char)124;
signed char var_8 = (signed char)115;
signed char var_9 = (signed char)2;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)94;
int var_12 = 727396719;
unsigned int var_13 = 3520624228U;
unsigned char var_14 = (unsigned char)111;
int zero = 0;
unsigned int var_16 = 2113376854U;
unsigned short var_17 = (unsigned short)12400;
signed char var_18 = (signed char)16;
unsigned long long int var_19 = 4617475931146598681ULL;
int var_20 = 983306525;
unsigned char var_21 = (unsigned char)159;
unsigned long long int var_22 = 1989244225622307598ULL;
short var_23 = (short)-24382;
short var_24 = (short)-15207;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 12872655161634015112ULL;
signed char var_27 = (signed char)-71;
short var_28 = (short)17390;
unsigned char var_29 = (unsigned char)80;
int arr_0 [15] [15] ;
unsigned long long int arr_1 [15] ;
int arr_2 [15] [15] [15] ;
int arr_6 [12] ;
signed char arr_10 [12] [12] [12] ;
int arr_17 [12] [12] [12] ;
int arr_5 [15] [15] [15] ;
signed char arr_15 [12] [12] [12] ;
_Bool arr_21 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -1108271014;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 12939870478274702106ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1693558552;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -1999113342;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -229193087;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1299173635;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
