#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
signed char var_1 = (signed char)99;
unsigned char var_2 = (unsigned char)190;
signed char var_3 = (signed char)-31;
signed char var_8 = (signed char)72;
signed char var_10 = (signed char)19;
unsigned char var_11 = (unsigned char)246;
signed char var_12 = (signed char)42;
signed char var_13 = (signed char)-8;
int zero = 0;
unsigned char var_14 = (unsigned char)74;
signed char var_15 = (signed char)-61;
unsigned char var_16 = (unsigned char)58;
signed char var_17 = (signed char)18;
unsigned char arr_0 [12] [12] ;
signed char arr_2 [12] ;
unsigned char arr_4 [12] [12] ;
signed char arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)63;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
