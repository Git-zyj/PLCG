#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 12457270;
unsigned long long int var_14 = 3583679651579035251ULL;
unsigned long long int var_15 = 7033075746436467262ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)39;
unsigned int var_20 = 782500286U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
