#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 484822870396503948ULL;
short var_5 = (short)-25736;
unsigned char var_9 = (unsigned char)147;
unsigned short var_15 = (unsigned short)56090;
int zero = 0;
unsigned char var_20 = (unsigned char)24;
signed char var_21 = (signed char)-96;
unsigned int var_22 = 2204049379U;
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
