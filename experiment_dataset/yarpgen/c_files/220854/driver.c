#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2352;
unsigned int var_3 = 2538020615U;
unsigned char var_6 = (unsigned char)203;
unsigned int var_7 = 868017794U;
unsigned char var_12 = (unsigned char)165;
int zero = 0;
unsigned int var_15 = 2737382278U;
unsigned char var_16 = (unsigned char)16;
unsigned char var_17 = (unsigned char)207;
void init() {
}

void checksum() {
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
