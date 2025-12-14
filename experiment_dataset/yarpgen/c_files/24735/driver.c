#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-103;
unsigned char var_6 = (unsigned char)212;
unsigned char var_9 = (unsigned char)30;
int zero = 0;
unsigned long long int var_10 = 14495547562422851965ULL;
unsigned int var_11 = 615885275U;
int var_12 = 2078255984;
unsigned int var_13 = 1205671677U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
