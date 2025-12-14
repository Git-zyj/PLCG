#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18081515256369282293ULL;
unsigned long long int var_2 = 1457682681168672033ULL;
int zero = 0;
unsigned long long int var_13 = 462903926256109923ULL;
unsigned long long int var_14 = 3891869026704839784ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
