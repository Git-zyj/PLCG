#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_7 = (short)22397;
unsigned int var_10 = 3307028312U;
unsigned long long int var_11 = 16567396213915860118ULL;
int zero = 0;
unsigned long long int var_15 = 1585777730239969225ULL;
unsigned long long int var_16 = 2523322725066224453ULL;
void init() {
}

void checksum() {
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
