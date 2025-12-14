#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -8171308667493061440LL;
unsigned long long int var_15 = 5459429345939215623ULL;
int zero = 0;
unsigned int var_17 = 3485457024U;
unsigned long long int var_18 = 14571091913336873499ULL;
void init() {
}

void checksum() {
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
