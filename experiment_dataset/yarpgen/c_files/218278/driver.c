#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1499710697U;
signed char var_5 = (signed char)44;
int var_8 = 48455413;
unsigned char var_10 = (unsigned char)6;
long long int var_11 = -4402934230256626385LL;
int zero = 0;
signed char var_15 = (signed char)31;
unsigned int var_16 = 3166832738U;
void init() {
}

void checksum() {
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
