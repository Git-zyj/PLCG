#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4051023971U;
unsigned char var_13 = (unsigned char)92;
unsigned int var_14 = 846416720U;
int zero = 0;
unsigned short var_16 = (unsigned short)25331;
unsigned int var_17 = 4020135053U;
void init() {
}

void checksum() {
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
