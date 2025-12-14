#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1906098706U;
int var_4 = -1195832510;
unsigned char var_6 = (unsigned char)141;
signed char var_9 = (signed char)-4;
int zero = 0;
long long int var_11 = 1167935632510202034LL;
unsigned int var_12 = 2830126395U;
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
