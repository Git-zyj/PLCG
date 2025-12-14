#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)122;
unsigned char var_4 = (unsigned char)92;
int zero = 0;
unsigned long long int var_15 = 9580575241718655361ULL;
long long int var_16 = 8039950093272607061LL;
unsigned int var_17 = 3909162141U;
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
