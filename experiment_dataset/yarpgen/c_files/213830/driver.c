#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-30941;
short var_17 = (short)11676;
signed char var_18 = (signed char)69;
int zero = 0;
short var_20 = (short)24011;
unsigned short var_21 = (unsigned short)39684;
signed char var_22 = (signed char)-96;
short var_23 = (short)6140;
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
