#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21349;
short var_2 = (short)13199;
short var_8 = (short)-31560;
unsigned short var_10 = (unsigned short)44660;
unsigned int var_12 = 582377396U;
int zero = 0;
unsigned short var_13 = (unsigned short)5925;
short var_14 = (short)-18034;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
