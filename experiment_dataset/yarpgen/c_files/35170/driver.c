#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-4;
signed char var_2 = (signed char)-23;
signed char var_7 = (signed char)76;
signed char var_9 = (signed char)103;
signed char var_10 = (signed char)-102;
int zero = 0;
signed char var_12 = (signed char)65;
signed char var_13 = (signed char)-48;
signed char var_14 = (signed char)37;
signed char var_15 = (signed char)11;
signed char var_16 = (signed char)-66;
signed char var_17 = (signed char)(-127 - 1);
signed char var_18 = (signed char)-3;
signed char var_19 = (signed char)-81;
signed char var_20 = (signed char)42;
signed char var_21 = (signed char)29;
signed char var_22 = (signed char)110;
signed char arr_0 [21] ;
signed char arr_1 [21] ;
signed char arr_2 [21] [21] ;
signed char arr_5 [21] [21] [21] ;
signed char arr_7 [12] [12] ;
signed char arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-102 : (signed char)43;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (signed char)-97;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
