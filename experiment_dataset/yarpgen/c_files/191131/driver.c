#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1368186625511823132LL;
unsigned long long int var_4 = 13190707581034933447ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2253974595U;
unsigned int var_13 = 1874600585U;
int zero = 0;
unsigned long long int var_14 = 12021532266318634807ULL;
unsigned int var_15 = 2698587567U;
void init() {
}

void checksum() {
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
