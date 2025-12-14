#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
unsigned long long int var_1 = 12525155408202528608ULL;
unsigned int var_3 = 3409408626U;
signed char var_7 = (signed char)7;
unsigned char var_9 = (unsigned char)173;
int zero = 0;
unsigned int var_10 = 2136457802U;
unsigned char var_11 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
