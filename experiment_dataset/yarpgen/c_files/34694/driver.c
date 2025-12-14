#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1683008756U;
unsigned int var_4 = 588528549U;
signed char var_6 = (signed char)122;
int var_14 = 1222141565;
int zero = 0;
unsigned int var_15 = 2310613646U;
unsigned long long int var_16 = 6868469975202207536ULL;
unsigned int var_17 = 1739404621U;
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
