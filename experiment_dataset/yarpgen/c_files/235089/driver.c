#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
unsigned char var_2 = (unsigned char)107;
long long int var_15 = 905398732200540611LL;
unsigned int var_16 = 3642615757U;
int zero = 0;
long long int var_17 = -3768113951795872093LL;
unsigned char var_18 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
