#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)45;
long long int var_5 = 6023157119214132005LL;
unsigned char var_11 = (unsigned char)195;
int zero = 0;
int var_14 = -433426690;
unsigned int var_15 = 2515127024U;
signed char var_16 = (signed char)27;
void init() {
}

void checksum() {
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
