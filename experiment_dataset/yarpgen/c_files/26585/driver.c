#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14229125207740344995ULL;
unsigned long long int var_9 = 5552745986437981437ULL;
unsigned long long int var_10 = 13423896087786315658ULL;
unsigned long long int var_15 = 11667821580685027826ULL;
int zero = 0;
short var_19 = (short)-4461;
signed char var_20 = (signed char)17;
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
