#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1480504708U;
long long int var_14 = -8555903593624347887LL;
signed char var_15 = (signed char)76;
int zero = 0;
int var_20 = 125861216;
unsigned int var_21 = 2019685575U;
int var_22 = 194223434;
unsigned long long int var_23 = 15571383725617578865ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
