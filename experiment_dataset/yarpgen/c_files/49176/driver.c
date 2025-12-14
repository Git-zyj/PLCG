#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-103;
signed char var_5 = (signed char)-58;
signed char var_6 = (signed char)-41;
signed char var_10 = (signed char)-20;
int zero = 0;
signed char var_15 = (signed char)-110;
signed char var_16 = (signed char)-70;
signed char var_17 = (signed char)116;
signed char var_18 = (signed char)33;
signed char var_19 = (signed char)88;
signed char var_20 = (signed char)-78;
signed char var_21 = (signed char)-27;
signed char var_22 = (signed char)75;
signed char var_23 = (signed char)15;
signed char var_24 = (signed char)57;
signed char var_25 = (signed char)23;
signed char var_26 = (signed char)125;
signed char var_27 = (signed char)73;
signed char var_28 = (signed char)-93;
signed char var_29 = (signed char)-117;
signed char var_30 = (signed char)-99;
signed char var_31 = (signed char)-66;
signed char var_32 = (signed char)60;
signed char var_33 = (signed char)1;
signed char arr_0 [15] ;
signed char arr_1 [15] ;
signed char arr_2 [15] ;
signed char arr_3 [15] ;
signed char arr_5 [15] [15] [15] ;
signed char arr_6 [15] [15] ;
signed char arr_8 [15] ;
signed char arr_10 [15] [15] ;
signed char arr_13 [18] ;
signed char arr_14 [18] ;
signed char arr_17 [23] ;
signed char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)37;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
