#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 593516424U;
int var_5 = -352483226;
int var_9 = 1312311234;
unsigned long long int var_11 = 433638090877131551ULL;
signed char var_13 = (signed char)33;
unsigned short var_16 = (unsigned short)62774;
int zero = 0;
unsigned char var_19 = (unsigned char)65;
int var_20 = -1687118186;
short var_21 = (short)-8836;
short arr_0 [19] ;
signed char arr_2 [19] [19] ;
short arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-30094;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-6513;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
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
