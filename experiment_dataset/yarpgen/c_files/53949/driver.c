#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1787426630U;
signed char var_8 = (signed char)72;
unsigned char var_10 = (unsigned char)221;
int zero = 0;
unsigned int var_11 = 1819325091U;
unsigned int var_12 = 3937231089U;
void init() {
}

void checksum() {
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
