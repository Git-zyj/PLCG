#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_5 = -8873340430959387127LL;
_Bool var_9 = (_Bool)1;
signed char var_15 = (signed char)-49;
int zero = 0;
long long int var_16 = -8839440941158208814LL;
unsigned int var_17 = 1597523476U;
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
