#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15479258185491779050ULL;
int var_15 = -1937530857;
unsigned char var_18 = (unsigned char)158;
int zero = 0;
unsigned int var_19 = 664114094U;
unsigned long long int var_20 = 7270059406854905027ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
