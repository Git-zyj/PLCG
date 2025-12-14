#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2038647843;
unsigned long long int var_4 = 2132273555379865826ULL;
long long int var_6 = 6477560426671036239LL;
long long int var_9 = -17860045845247587LL;
int zero = 0;
int var_11 = -1073908923;
_Bool var_12 = (_Bool)0;
int var_13 = 1763205308;
int var_14 = 516958624;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
