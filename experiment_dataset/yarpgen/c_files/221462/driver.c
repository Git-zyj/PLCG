#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)189;
unsigned int var_13 = 3487870780U;
long long int var_14 = 8985454466162209775LL;
short var_19 = (short)-23793;
int zero = 0;
short var_20 = (short)11944;
long long int var_21 = -7313931016935059064LL;
signed char var_22 = (signed char)62;
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
