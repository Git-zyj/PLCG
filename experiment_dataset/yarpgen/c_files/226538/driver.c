#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)144;
short var_7 = (short)-12025;
short var_8 = (short)3663;
unsigned long long int var_9 = 15439021265727120481ULL;
long long int var_14 = 8165251400557577113LL;
int zero = 0;
long long int var_15 = 780547310681353913LL;
short var_16 = (short)-32223;
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
