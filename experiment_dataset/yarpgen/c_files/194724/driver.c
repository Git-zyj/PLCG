#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 194269513585153136LL;
unsigned int var_3 = 47988608U;
unsigned int var_5 = 4008206971U;
int zero = 0;
unsigned int var_10 = 1174211933U;
unsigned short var_11 = (unsigned short)2144;
unsigned long long int var_12 = 10041980281366730522ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
