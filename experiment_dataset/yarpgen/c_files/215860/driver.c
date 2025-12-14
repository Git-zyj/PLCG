#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9015556122700054537ULL;
short var_3 = (short)-27157;
unsigned long long int var_12 = 5893184589232825412ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5389522404894249217LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
