#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -354959724;
long long int var_13 = -1605533266002155901LL;
unsigned long long int var_15 = 10695005792349671189ULL;
int zero = 0;
int var_16 = -377519805;
long long int var_17 = 957483734167717172LL;
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
