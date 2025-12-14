#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62435;
unsigned short var_2 = (unsigned short)45427;
unsigned short var_3 = (unsigned short)53454;
unsigned short var_4 = (unsigned short)61988;
unsigned short var_5 = (unsigned short)42059;
unsigned short var_9 = (unsigned short)40624;
unsigned short var_10 = (unsigned short)48293;
int zero = 0;
unsigned short var_11 = (unsigned short)45389;
unsigned short var_12 = (unsigned short)55999;
unsigned short var_13 = (unsigned short)23002;
unsigned short var_14 = (unsigned short)19147;
unsigned short var_15 = (unsigned short)63552;
unsigned short var_16 = (unsigned short)21148;
unsigned short var_17 = (unsigned short)4303;
unsigned short var_18 = (unsigned short)34925;
unsigned short var_19 = (unsigned short)31685;
unsigned short var_20 = (unsigned short)804;
unsigned short var_21 = (unsigned short)55565;
unsigned short var_22 = (unsigned short)56568;
unsigned short arr_0 [20] ;
unsigned short arr_1 [20] [20] ;
unsigned short arr_4 [19] ;
unsigned short arr_7 [16] ;
unsigned short arr_8 [16] [16] [16] ;
unsigned short arr_10 [16] ;
unsigned short arr_15 [16] [16] [16] ;
unsigned short arr_17 [16] [16] [16] [16] [16] ;
unsigned short arr_19 [16] [16] ;
unsigned short arr_2 [20] [20] ;
unsigned short arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)63549;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)26051;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)2671;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)17461;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)16409;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned short)32104;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)28682;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)53558;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)33538;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)10593;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)53435;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
