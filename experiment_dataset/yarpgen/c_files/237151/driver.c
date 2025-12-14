#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5033824683761006943LL;
int var_6 = -551411734;
unsigned short var_7 = (unsigned short)38673;
int zero = 0;
unsigned int var_11 = 1457352888U;
unsigned short var_12 = (unsigned short)51043;
unsigned short var_13 = (unsigned short)48333;
unsigned char var_14 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
