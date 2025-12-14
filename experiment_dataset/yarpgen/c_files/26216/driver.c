#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_17 = (unsigned short)29947;
unsigned int var_18 = 661183337U;
int zero = 0;
long long int var_19 = -656253554548666897LL;
unsigned short var_20 = (unsigned short)61598;
unsigned short var_21 = (unsigned short)34435;
unsigned short var_22 = (unsigned short)65524;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
