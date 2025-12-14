#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1136589678U;
unsigned short var_12 = (unsigned short)37962;
short var_13 = (short)-19904;
int zero = 0;
unsigned int var_15 = 3211248096U;
unsigned char var_16 = (unsigned char)38;
unsigned int var_17 = 684356017U;
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
