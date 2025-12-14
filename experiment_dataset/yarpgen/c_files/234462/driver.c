#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
signed char var_1 = (signed char)116;
signed char var_2 = (signed char)55;
signed char var_3 = (signed char)-82;
signed char var_4 = (signed char)84;
signed char var_5 = (signed char)16;
signed char var_6 = (signed char)6;
signed char var_7 = (signed char)7;
signed char var_8 = (signed char)-69;
signed char var_9 = (signed char)-42;
signed char var_10 = (signed char)64;
signed char var_11 = (signed char)-80;
signed char var_12 = (signed char)-35;
int zero = 0;
signed char var_13 = (signed char)-36;
signed char var_14 = (signed char)-127;
signed char var_15 = (signed char)48;
signed char var_16 = (signed char)117;
signed char var_17 = (signed char)-87;
signed char var_18 = (signed char)-92;
signed char arr_4 [22] ;
signed char arr_5 [22] ;
signed char arr_8 [23] ;
signed char arr_12 [23] ;
signed char arr_13 [23] ;
signed char arr_14 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-38 : (signed char)10;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-120;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
