#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8672519001918109171LL;
unsigned long long int var_6 = 16683219770229690423ULL;
unsigned int var_7 = 461903591U;
int zero = 0;
signed char var_11 = (signed char)38;
_Bool var_12 = (_Bool)0;
int var_13 = -668858703;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
