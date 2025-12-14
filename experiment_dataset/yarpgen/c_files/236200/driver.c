#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3191871652U;
unsigned char var_7 = (unsigned char)69;
long long int var_8 = -1700692779644593125LL;
int var_9 = 2076605476;
unsigned char var_10 = (unsigned char)102;
int zero = 0;
unsigned char var_14 = (unsigned char)24;
unsigned int var_15 = 2878510299U;
unsigned char var_16 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
