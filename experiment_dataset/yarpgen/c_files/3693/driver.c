#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)16320;
unsigned short var_13 = (unsigned short)31108;
int zero = 0;
int var_14 = -1919488857;
short var_15 = (short)13854;
unsigned int var_16 = 1508964377U;
unsigned short var_17 = (unsigned short)45701;
void init() {
}

void checksum() {
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
