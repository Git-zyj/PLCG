#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-122;
unsigned short var_4 = (unsigned short)26783;
unsigned long long int var_6 = 2449313577307544436ULL;
short var_10 = (short)-10636;
int zero = 0;
long long int var_11 = 1559655458719446363LL;
long long int var_12 = -8550429408528567810LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
