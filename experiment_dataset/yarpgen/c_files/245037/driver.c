#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 116073832U;
short var_3 = (short)29793;
long long int var_5 = 6186172432916232943LL;
int zero = 0;
unsigned short var_14 = (unsigned short)2819;
int var_15 = 1666202488;
short var_16 = (short)-31539;
void init() {
}

void checksum() {
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
