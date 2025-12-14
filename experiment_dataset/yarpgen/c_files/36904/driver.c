#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 394069968861250305LL;
unsigned long long int var_11 = 11065862398140697808ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)192;
unsigned long long int var_17 = 6611228132703786762ULL;
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
