#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 81975415U;
short var_5 = (short)11564;
unsigned char var_7 = (unsigned char)164;
unsigned int var_11 = 1375240774U;
int zero = 0;
unsigned char var_12 = (unsigned char)8;
unsigned char var_13 = (unsigned char)47;
short var_14 = (short)-23125;
unsigned int var_15 = 4155962598U;
short var_16 = (short)-31602;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
