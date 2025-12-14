#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 493041652;
unsigned int var_6 = 2178542501U;
int zero = 0;
unsigned char var_11 = (unsigned char)114;
unsigned short var_12 = (unsigned short)22870;
unsigned long long int var_13 = 14336714049733097242ULL;
short var_14 = (short)26178;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
