#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31316;
unsigned long long int var_10 = 2607548614160235050ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)53171;
unsigned int var_13 = 1488002304U;
unsigned short var_14 = (unsigned short)63044;
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
