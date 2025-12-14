#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16099;
unsigned short var_6 = (unsigned short)45849;
short var_7 = (short)-13108;
unsigned short var_9 = (unsigned short)43833;
unsigned int var_13 = 488792573U;
int zero = 0;
short var_15 = (short)25924;
unsigned char var_16 = (unsigned char)84;
signed char var_17 = (signed char)85;
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
