#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 722205137U;
unsigned int var_4 = 3812929060U;
unsigned long long int var_9 = 800666841987660287ULL;
unsigned int var_12 = 4235899319U;
int zero = 0;
signed char var_13 = (signed char)(-127 - 1);
unsigned int var_14 = 976361901U;
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
