#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28020;
unsigned long long int var_5 = 2218247727074987787ULL;
unsigned short var_11 = (unsigned short)38728;
int zero = 0;
unsigned int var_13 = 1887774864U;
signed char var_14 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
