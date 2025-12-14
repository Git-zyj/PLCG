#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29330;
short var_1 = (short)-18070;
short var_3 = (short)-16805;
short var_4 = (short)-9179;
short var_6 = (short)-22908;
short var_7 = (short)-19515;
short var_8 = (short)-13320;
short var_9 = (short)-7630;
short var_10 = (short)-378;
short var_11 = (short)-29193;
short var_12 = (short)30165;
int zero = 0;
short var_15 = (short)21438;
short var_16 = (short)-11753;
short var_17 = (short)-21172;
short var_18 = (short)11270;
short var_19 = (short)24980;
short arr_0 [16] [16] ;
short arr_10 [15] ;
short arr_2 [16] ;
short arr_3 [16] ;
short arr_8 [14] [14] ;
short arr_9 [14] [14] ;
short arr_12 [15] [15] ;
short arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)18877;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (short)-27962;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-19658;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-145;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (short)27551;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-10850;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (short)23944;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (short)10210;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
