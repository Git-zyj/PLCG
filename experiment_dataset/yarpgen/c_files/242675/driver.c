#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 713732688U;
unsigned char var_5 = (unsigned char)95;
unsigned char var_6 = (unsigned char)132;
unsigned int var_9 = 3203414749U;
unsigned char var_11 = (unsigned char)96;
unsigned int var_12 = 938161133U;
int zero = 0;
unsigned char var_14 = (unsigned char)6;
unsigned char var_15 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
