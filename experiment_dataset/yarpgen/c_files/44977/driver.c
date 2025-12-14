#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)132;
unsigned int var_5 = 2105518799U;
unsigned char var_13 = (unsigned char)249;
int zero = 0;
unsigned int var_19 = 18528992U;
long long int var_20 = 6043694238130694608LL;
unsigned int var_21 = 1329997918U;
unsigned char var_22 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
