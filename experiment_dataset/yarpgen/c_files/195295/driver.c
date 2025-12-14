#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1392847694;
unsigned char var_3 = (unsigned char)48;
unsigned int var_5 = 2218101686U;
short var_8 = (short)3665;
int var_10 = 1687990088;
int zero = 0;
int var_13 = -1717402543;
int var_14 = 1276803428;
void init() {
}

void checksum() {
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
