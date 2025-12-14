#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14097385756591626808ULL;
unsigned int var_5 = 3171305918U;
int var_10 = 1140435465;
int zero = 0;
unsigned int var_12 = 4265957685U;
unsigned long long int var_13 = 9977068962124075082ULL;
int var_14 = -85522943;
unsigned char var_15 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
