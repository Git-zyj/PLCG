#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1152978619;
short var_6 = (short)-16753;
unsigned long long int var_7 = 6516966740079394995ULL;
int zero = 0;
int var_13 = 917634503;
unsigned int var_14 = 396676514U;
unsigned short var_15 = (unsigned short)63392;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
