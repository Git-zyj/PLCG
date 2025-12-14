#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 500243551030273648ULL;
long long int var_16 = -5062380815157295683LL;
unsigned int var_18 = 2120285813U;
int zero = 0;
short var_20 = (short)27364;
int var_21 = -898637853;
unsigned int var_22 = 4187449901U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
