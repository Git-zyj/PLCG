#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3099830075U;
unsigned int var_2 = 246652864U;
unsigned short var_4 = (unsigned short)58895;
signed char var_5 = (signed char)87;
short var_9 = (short)11898;
unsigned int var_10 = 3509689660U;
unsigned short var_12 = (unsigned short)19347;
unsigned long long int var_13 = 11611229583228567395ULL;
long long int var_15 = 4832351306989210832LL;
int zero = 0;
int var_16 = -27669315;
short var_17 = (short)3515;
long long int var_18 = -3700541393090726497LL;
unsigned long long int var_19 = 18417107228266492112ULL;
unsigned int var_20 = 3794160741U;
unsigned int var_21 = 792444628U;
signed char var_22 = (signed char)106;
unsigned long long int var_23 = 14321226718155724189ULL;
signed char arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
int arr_5 [22] [22] ;
signed char arr_8 [22] [22] ;
short arr_2 [17] [17] ;
long long int arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)95 : (signed char)125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = -1960352961;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)12105 : (short)2850;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = -445633490202756468LL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
