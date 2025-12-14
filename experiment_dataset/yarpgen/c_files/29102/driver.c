#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26780;
unsigned short var_1 = (unsigned short)49687;
unsigned short var_3 = (unsigned short)31864;
unsigned short var_4 = (unsigned short)36894;
unsigned short var_6 = (unsigned short)12976;
unsigned short var_9 = (unsigned short)19066;
unsigned short var_10 = (unsigned short)29154;
unsigned short var_11 = (unsigned short)3014;
unsigned short var_14 = (unsigned short)5933;
unsigned short var_16 = (unsigned short)13104;
int zero = 0;
unsigned short var_17 = (unsigned short)6202;
unsigned short var_18 = (unsigned short)12606;
unsigned short var_19 = (unsigned short)50225;
unsigned short var_20 = (unsigned short)19878;
unsigned short var_21 = (unsigned short)6873;
unsigned short var_22 = (unsigned short)49224;
unsigned short var_23 = (unsigned short)46137;
unsigned short var_24 = (unsigned short)20450;
unsigned short var_25 = (unsigned short)20854;
unsigned short var_26 = (unsigned short)54156;
unsigned short var_27 = (unsigned short)3745;
unsigned short arr_1 [13] ;
unsigned short arr_6 [22] ;
unsigned short arr_7 [22] [22] ;
unsigned short arr_19 [22] ;
unsigned short arr_2 [13] ;
unsigned short arr_3 [13] ;
unsigned short arr_9 [22] ;
unsigned short arr_10 [22] ;
unsigned short arr_11 [22] [22] ;
unsigned short arr_12 [22] ;
unsigned short arr_13 [22] [22] ;
unsigned short arr_18 [22] ;
unsigned short arr_23 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)16392;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)62777;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)64629;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (unsigned short)53812;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)6723;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)42521;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18817 : (unsigned short)11398;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5339 : (unsigned short)17066;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)54920 : (unsigned short)48;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55944 : (unsigned short)33281;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35993 : (unsigned short)35667;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (unsigned short)20002;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)32126;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
