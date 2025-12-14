#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2524304625503300986LL;
unsigned int var_6 = 279242255U;
int var_7 = 1348454942;
long long int var_16 = -2430249369879969799LL;
int zero = 0;
unsigned int var_17 = 3425227461U;
unsigned char var_18 = (unsigned char)39;
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
