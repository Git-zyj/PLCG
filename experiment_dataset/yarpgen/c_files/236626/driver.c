#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18498;
unsigned short var_3 = (unsigned short)47604;
unsigned char var_4 = (unsigned char)71;
unsigned long long int var_5 = 3888394500660935ULL;
signed char var_7 = (signed char)-114;
int var_8 = -825335338;
unsigned int var_9 = 3416241713U;
int zero = 0;
unsigned char var_13 = (unsigned char)194;
unsigned int var_14 = 805228355U;
int var_15 = -310963335;
_Bool var_16 = (_Bool)0;
unsigned short arr_0 [21] ;
int arr_1 [21] ;
_Bool arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17643 : (unsigned short)18687;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2087858518 : 994699778;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
