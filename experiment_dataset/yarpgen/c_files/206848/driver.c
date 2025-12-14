#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58117;
unsigned short var_1 = (unsigned short)8101;
unsigned int var_4 = 2628105771U;
unsigned char var_12 = (unsigned char)78;
int zero = 0;
unsigned char var_13 = (unsigned char)130;
unsigned int var_14 = 4279520003U;
short var_15 = (short)-17778;
short var_16 = (short)-18178;
unsigned int var_17 = 3365987879U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
