#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3150466228U;
unsigned char var_10 = (unsigned char)130;
unsigned int var_12 = 4010354630U;
unsigned int var_13 = 1116926051U;
int zero = 0;
long long int var_16 = 3896851754837849126LL;
long long int var_17 = 3348098227234074957LL;
void init() {
}

void checksum() {
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
