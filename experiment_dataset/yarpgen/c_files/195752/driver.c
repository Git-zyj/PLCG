#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -59882995;
unsigned long long int var_6 = 9583438368040068225ULL;
int var_9 = -80308469;
int zero = 0;
int var_15 = 616159078;
unsigned short var_16 = (unsigned short)54279;
unsigned long long int var_17 = 5185674160318279053ULL;
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
