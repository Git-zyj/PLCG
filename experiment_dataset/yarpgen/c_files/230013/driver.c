#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
long long int var_3 = 811641365414685992LL;
long long int var_8 = 6118620398963852440LL;
long long int var_9 = 6455588111191514135LL;
signed char var_14 = (signed char)78;
int zero = 0;
long long int var_15 = 5225039063978628008LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
