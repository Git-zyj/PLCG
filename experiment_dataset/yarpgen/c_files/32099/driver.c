#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22178;
unsigned int var_6 = 3662741784U;
unsigned long long int var_8 = 15130269471935059127ULL;
short var_13 = (short)362;
int zero = 0;
int var_14 = 1857970931;
short var_15 = (short)22810;
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
