#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -530448714;
unsigned int var_11 = 2741694204U;
long long int var_12 = 1545231521122884451LL;
int var_15 = -1240053547;
int zero = 0;
unsigned int var_16 = 3322913231U;
unsigned int var_17 = 2765746972U;
unsigned int var_18 = 3414133873U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
