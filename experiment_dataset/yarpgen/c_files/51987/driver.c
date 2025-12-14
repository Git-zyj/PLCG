#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22546;
unsigned char var_9 = (unsigned char)81;
long long int var_11 = -1027630356863437905LL;
int zero = 0;
unsigned int var_14 = 2530052543U;
unsigned int var_15 = 1841990930U;
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
