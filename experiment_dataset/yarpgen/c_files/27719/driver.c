#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3864982739U;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -7931992084730808836LL;
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
