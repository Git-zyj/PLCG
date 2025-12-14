#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
signed char var_2 = (signed char)42;
signed char var_3 = (signed char)-94;
signed char var_4 = (signed char)49;
signed char var_5 = (signed char)-65;
signed char var_6 = (signed char)100;
signed char var_7 = (signed char)22;
signed char var_8 = (signed char)-16;
signed char var_9 = (signed char)13;
signed char var_10 = (signed char)-20;
signed char var_11 = (signed char)48;
signed char var_12 = (signed char)-16;
signed char var_13 = (signed char)86;
int zero = 0;
signed char var_14 = (signed char)-76;
signed char var_15 = (signed char)29;
signed char var_16 = (signed char)26;
signed char var_17 = (signed char)-64;
signed char var_18 = (signed char)98;
signed char arr_6 [11] ;
signed char arr_7 [11] ;
signed char arr_17 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)121 : (signed char)-48;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)42 : (signed char)67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-103;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
