#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 814781008U;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)119;
int var_13 = -1860717821;
_Bool var_14 = (_Bool)0;
long long int var_15 = 8994816999770606368LL;
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
