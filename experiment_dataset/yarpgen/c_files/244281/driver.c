#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2851;
long long int var_3 = -2388865673862917417LL;
short var_14 = (short)22515;
short var_15 = (short)21247;
int zero = 0;
long long int var_16 = -1665813096355353168LL;
long long int var_17 = -7173840029581218467LL;
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
