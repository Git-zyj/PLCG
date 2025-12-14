#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8110919440869766239LL;
long long int var_1 = -3315406934112197944LL;
short var_3 = (short)29723;
long long int var_10 = 8938039148702603357LL;
int zero = 0;
short var_11 = (short)25355;
short var_12 = (short)-15627;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
