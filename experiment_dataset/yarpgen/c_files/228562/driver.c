#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2182136331U;
unsigned int var_7 = 2653985799U;
unsigned int var_8 = 2672030029U;
unsigned int var_9 = 2414010522U;
unsigned int var_12 = 4142103850U;
unsigned int var_14 = 2260459648U;
int zero = 0;
unsigned int var_15 = 2188510676U;
unsigned int var_16 = 3078449812U;
unsigned int var_17 = 3002650324U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
