#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 900164141;
unsigned int var_11 = 178312501U;
int zero = 0;
signed char var_20 = (signed char)-81;
unsigned long long int var_21 = 13178307702148502035ULL;
unsigned int var_22 = 2074767801U;
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
