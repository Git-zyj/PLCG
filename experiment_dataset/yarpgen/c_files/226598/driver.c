#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23230;
short var_3 = (short)28158;
short var_4 = (short)-9409;
short var_7 = (short)14405;
short var_9 = (short)-27930;
short var_11 = (short)-19739;
short var_13 = (short)-24076;
short var_18 = (short)-5429;
short var_19 = (short)-17920;
int zero = 0;
short var_20 = (short)-31864;
short var_21 = (short)456;
short var_22 = (short)16075;
short var_23 = (short)1341;
short var_24 = (short)9746;
short var_25 = (short)24443;
short var_26 = (short)915;
short var_27 = (short)31636;
short arr_1 [22] [22] ;
short arr_2 [22] ;
short arr_4 [11] [11] ;
short arr_5 [11] ;
short arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)28036;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)13124 : (short)-7571;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (short)30567;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)18960;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (short)20240;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
