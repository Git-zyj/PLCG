#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1510425147U;
int var_4 = -2138128271;
signed char var_11 = (signed char)28;
unsigned int var_12 = 2482059465U;
int zero = 0;
unsigned long long int var_13 = 15735491659879338614ULL;
unsigned char var_14 = (unsigned char)218;
short var_15 = (short)19881;
short var_16 = (short)-28033;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
