#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6857041335927804730LL;
long long int var_4 = -421188000910894329LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 15963436812376829784ULL;
unsigned long long int var_15 = 5483444946486577262ULL;
int var_16 = -216909712;
void init() {
}

void checksum() {
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
