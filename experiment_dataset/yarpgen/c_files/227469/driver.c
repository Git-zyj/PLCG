#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1622154953;
signed char var_6 = (signed char)-4;
unsigned short var_10 = (unsigned short)59521;
unsigned int var_13 = 2107355563U;
int zero = 0;
int var_14 = -584652164;
unsigned long long int var_15 = 12258219045723484542ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
