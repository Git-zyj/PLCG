#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3365642796U;
short var_2 = (short)2690;
short var_4 = (short)-7016;
int zero = 0;
unsigned int var_14 = 2773442821U;
short var_15 = (short)-26670;
unsigned char var_16 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
