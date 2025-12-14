#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -188024255;
unsigned long long int var_10 = 16831169672294754932ULL;
int var_12 = 256616171;
int var_13 = 1524526299;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 428925159U;
unsigned int var_17 = 1441081547U;
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
