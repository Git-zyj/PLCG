#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2439516595403803401LL;
short var_7 = (short)29865;
long long int var_11 = -4979442165000002955LL;
int zero = 0;
short var_16 = (short)-11883;
long long int var_17 = -3636410086049193952LL;
short var_18 = (short)7171;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
