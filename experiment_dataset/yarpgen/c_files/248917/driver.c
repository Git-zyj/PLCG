#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 8499431712826476426LL;
unsigned long long int var_17 = 2758850725481093785ULL;
int zero = 0;
unsigned long long int var_18 = 6586474957394391225ULL;
unsigned int var_19 = 2758498484U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
