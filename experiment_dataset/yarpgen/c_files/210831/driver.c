#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1028830458;
long long int var_10 = 4831223445176303354LL;
int zero = 0;
long long int var_12 = -9146671633987922247LL;
unsigned long long int var_13 = 17387172605672749355ULL;
long long int var_14 = -5078292394447767425LL;
unsigned int var_15 = 2363038771U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
