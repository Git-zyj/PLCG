#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1077082535;
unsigned long long int var_5 = 7645319356897606436ULL;
unsigned short var_11 = (unsigned short)22714;
int zero = 0;
int var_17 = -1131121544;
unsigned long long int var_18 = 9146829354370665815ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
