#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4116213598U;
unsigned long long int var_4 = 10137401596923030038ULL;
unsigned char var_16 = (unsigned char)16;
int zero = 0;
unsigned int var_18 = 1769808628U;
signed char var_19 = (signed char)109;
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
