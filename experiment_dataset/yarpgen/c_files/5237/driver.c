#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3784555704462059298LL;
unsigned long long int var_3 = 15961320598623324612ULL;
unsigned int var_5 = 2498202305U;
int zero = 0;
long long int var_16 = 3302392314396104367LL;
unsigned short var_17 = (unsigned short)24226;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
