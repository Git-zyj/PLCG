#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13049;
unsigned short var_1 = (unsigned short)64851;
unsigned short var_3 = (unsigned short)24271;
signed char var_5 = (signed char)45;
signed char var_7 = (signed char)55;
unsigned short var_8 = (unsigned short)13182;
signed char var_9 = (signed char)27;
int var_12 = -268401866;
int zero = 0;
signed char var_13 = (signed char)85;
unsigned short var_14 = (unsigned short)11939;
unsigned int var_15 = 3253397304U;
signed char var_16 = (signed char)24;
unsigned int var_17 = 4272210554U;
unsigned short arr_0 [25] ;
unsigned int arr_1 [25] ;
signed char arr_7 [25] ;
unsigned long long int arr_13 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)35811;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3710433548U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = 14594791881069698365ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
