#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11504249321351367195ULL;
long long int var_7 = 6419938407940127491LL;
unsigned int var_14 = 1363411990U;
int zero = 0;
unsigned long long int var_15 = 3169486662735429529ULL;
unsigned int var_16 = 3498128386U;
void init() {
}

void checksum() {
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
