#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_4 = 1857465397U;
unsigned int var_10 = 3856364526U;
unsigned int var_12 = 1223400202U;
unsigned int var_14 = 1361075324U;
int zero = 0;
unsigned long long int var_15 = 6746687891181227181ULL;
unsigned int var_16 = 2395311689U;
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
