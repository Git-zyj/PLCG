#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16310497948350932874ULL;
unsigned int var_6 = 685565156U;
unsigned int var_7 = 1196122663U;
unsigned char var_9 = (unsigned char)165;
int zero = 0;
unsigned char var_12 = (unsigned char)242;
long long int var_13 = 672527676127815423LL;
unsigned char var_14 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
