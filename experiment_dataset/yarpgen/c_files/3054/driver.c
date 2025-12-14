#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1821748133;
unsigned long long int var_5 = 13004813982414179053ULL;
unsigned char var_11 = (unsigned char)48;
int zero = 0;
unsigned char var_14 = (unsigned char)37;
long long int var_15 = 5768934343488552482LL;
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
