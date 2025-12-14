#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
unsigned long long int var_1 = 4292483122714133432ULL;
int var_6 = 101985253;
signed char var_12 = (signed char)73;
int zero = 0;
unsigned char var_15 = (unsigned char)35;
unsigned long long int var_16 = 1672225361204871997ULL;
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
