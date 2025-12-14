#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12842;
signed char var_4 = (signed char)66;
signed char var_5 = (signed char)81;
short var_6 = (short)-24160;
signed char var_7 = (signed char)-99;
short var_8 = (short)9167;
short var_11 = (short)-901;
int zero = 0;
signed char var_19 = (signed char)119;
signed char var_20 = (signed char)109;
signed char var_21 = (signed char)-62;
signed char var_22 = (signed char)39;
signed char var_23 = (signed char)-68;
short var_24 = (short)25739;
signed char var_25 = (signed char)97;
short var_26 = (short)-27459;
signed char arr_6 [15] ;
short arr_7 [15] ;
signed char arr_9 [19] [19] ;
signed char arr_10 [19] ;
short arr_11 [19] ;
signed char arr_13 [19] [19] [19] ;
short arr_16 [19] [19] [19] ;
short arr_8 [15] ;
short arr_17 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)-491;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (short)12277;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)27597;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)11207;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (short)-1096;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
