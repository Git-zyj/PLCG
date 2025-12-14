#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
unsigned char var_5 = (unsigned char)128;
unsigned short var_8 = (unsigned short)37840;
short var_9 = (short)-28235;
unsigned long long int var_10 = 3877994987287221346ULL;
short var_11 = (short)11067;
int zero = 0;
unsigned char var_13 = (unsigned char)104;
unsigned char var_14 = (unsigned char)72;
short var_15 = (short)-27923;
unsigned long long int var_16 = 5632302811407635776ULL;
unsigned long long int arr_0 [13] [13] ;
unsigned int arr_2 [13] ;
short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 8802962088013500813ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2911854426U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)32766;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
