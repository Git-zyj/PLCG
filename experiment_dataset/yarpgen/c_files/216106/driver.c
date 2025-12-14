#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-124;
long long int var_3 = -8738984564859112434LL;
unsigned int var_5 = 3860171001U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2748657175U;
unsigned char var_12 = (unsigned char)17;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-23714;
long long int var_17 = -6893236933933050411LL;
unsigned short var_18 = (unsigned short)41846;
unsigned char arr_0 [12] ;
unsigned short arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)31368;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
