#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2092761857;
unsigned short var_3 = (unsigned short)44558;
unsigned int var_8 = 3377659645U;
int var_10 = -1683396466;
int zero = 0;
short var_19 = (short)7761;
int var_20 = -1240079754;
void init() {
}

void checksum() {
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
