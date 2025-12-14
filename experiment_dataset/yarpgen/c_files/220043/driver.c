#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
long long int var_1 = 5962080501428275937LL;
short var_6 = (short)-9255;
unsigned long long int var_7 = 14649582410434951063ULL;
int zero = 0;
signed char var_10 = (signed char)41;
short var_11 = (short)21316;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
