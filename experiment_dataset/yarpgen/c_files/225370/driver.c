#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16562386877883760188ULL;
unsigned int var_5 = 2542284072U;
int var_9 = -542722460;
int zero = 0;
unsigned int var_13 = 4221005503U;
unsigned long long int var_14 = 12526398562051383814ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
