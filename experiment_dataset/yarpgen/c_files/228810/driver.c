#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24462;
long long int var_3 = -2209507526407610493LL;
signed char var_4 = (signed char)88;
short var_9 = (short)-6944;
int zero = 0;
unsigned char var_10 = (unsigned char)24;
int var_11 = 307112822;
unsigned long long int var_12 = 14744751843200810298ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
