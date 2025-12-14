#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5665266795956396155LL;
unsigned long long int var_3 = 14816433769929477807ULL;
unsigned long long int var_8 = 1366697099612715033ULL;
unsigned int var_12 = 2437126954U;
int zero = 0;
int var_13 = -132468453;
unsigned long long int var_14 = 6853004317260698180ULL;
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
