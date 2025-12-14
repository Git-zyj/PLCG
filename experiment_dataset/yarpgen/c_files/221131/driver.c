#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_13 = 2435957703U;
unsigned char var_14 = (unsigned char)217;
signed char var_17 = (signed char)28;
int zero = 0;
unsigned long long int var_20 = 5017674791744942446ULL;
signed char var_21 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
