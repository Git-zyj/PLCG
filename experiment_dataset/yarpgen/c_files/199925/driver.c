#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
signed char var_6 = (signed char)-10;
unsigned int var_9 = 1133370937U;
long long int var_10 = 2482642949311504747LL;
int zero = 0;
long long int var_11 = -6773237368930348103LL;
unsigned long long int var_12 = 15746768951547438889ULL;
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
