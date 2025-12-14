#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2879880534U;
int var_10 = 1650550770;
short var_14 = (short)4767;
int zero = 0;
short var_16 = (short)130;
unsigned short var_17 = (unsigned short)10643;
unsigned char var_18 = (unsigned char)242;
unsigned char var_19 = (unsigned char)238;
int var_20 = -1853079447;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
