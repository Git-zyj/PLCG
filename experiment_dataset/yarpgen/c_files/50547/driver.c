#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 397690774;
unsigned long long int var_10 = 7971421715235517844ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)18574;
short var_15 = (short)20509;
unsigned short var_16 = (unsigned short)6947;
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
