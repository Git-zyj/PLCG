#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28113;
unsigned int var_3 = 1803170803U;
unsigned long long int var_17 = 12783256991499517662ULL;
int zero = 0;
signed char var_19 = (signed char)-75;
unsigned long long int var_20 = 1448896066104193412ULL;
signed char var_21 = (signed char)-42;
long long int var_22 = 7259901863863238752LL;
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
