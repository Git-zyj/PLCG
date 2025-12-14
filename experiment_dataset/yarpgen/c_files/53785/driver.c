#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3505607081741293229LL;
_Bool var_10 = (_Bool)1;
int var_11 = -2025761480;
short var_13 = (short)-28069;
int zero = 0;
long long int var_14 = 4721553433054520133LL;
unsigned char var_15 = (unsigned char)158;
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
