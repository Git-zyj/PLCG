#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3880694254604439927LL;
long long int var_3 = -2288625972204137475LL;
long long int var_15 = -8851726202587312651LL;
int zero = 0;
long long int var_16 = 4256955834726874236LL;
long long int var_17 = -7879411280425469414LL;
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
