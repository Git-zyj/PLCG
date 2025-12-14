#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49558;
signed char var_5 = (signed char)15;
unsigned int var_9 = 1167552434U;
short var_17 = (short)-9711;
int zero = 0;
int var_20 = 379666312;
signed char var_21 = (signed char)111;
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
