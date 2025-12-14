#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40239;
unsigned short var_1 = (unsigned short)64567;
unsigned char var_2 = (unsigned char)144;
unsigned short var_8 = (unsigned short)8206;
unsigned char var_10 = (unsigned char)201;
int zero = 0;
unsigned int var_11 = 2858451810U;
unsigned short var_12 = (unsigned short)49761;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)6601;
unsigned char var_15 = (unsigned char)187;
unsigned short arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)54673;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
