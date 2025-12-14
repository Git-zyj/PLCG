#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 105783582;
unsigned short var_4 = (unsigned short)21777;
int var_7 = -1465069896;
int zero = 0;
unsigned int var_12 = 233798614U;
unsigned long long int var_13 = 16811906557484894158ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
