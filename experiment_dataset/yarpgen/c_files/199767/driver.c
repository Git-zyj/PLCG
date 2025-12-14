#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1465831984U;
long long int var_8 = -1988279680272397257LL;
int zero = 0;
unsigned int var_13 = 2372083873U;
long long int var_14 = 2179099267621549423LL;
unsigned short var_15 = (unsigned short)22253;
int var_16 = -242138304;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
