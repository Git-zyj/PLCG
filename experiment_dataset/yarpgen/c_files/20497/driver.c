#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 255646174U;
unsigned char var_3 = (unsigned char)152;
unsigned long long int var_5 = 1265001050896778089ULL;
short var_6 = (short)12474;
int var_11 = -1709629267;
short var_14 = (short)8867;
int zero = 0;
unsigned short var_15 = (unsigned short)7448;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)21768;
signed char var_18 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
