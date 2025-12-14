#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3575149809535795904ULL;
unsigned int var_11 = 1377539717U;
long long int var_14 = 539047722327285727LL;
unsigned char var_17 = (unsigned char)99;
int zero = 0;
unsigned int var_19 = 2559305185U;
unsigned char var_20 = (unsigned char)204;
int var_21 = 378217157;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
