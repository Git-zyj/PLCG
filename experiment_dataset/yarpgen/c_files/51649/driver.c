#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6903633586745595427LL;
unsigned short var_11 = (unsigned short)5755;
unsigned long long int var_12 = 6909497965214765662ULL;
signed char var_14 = (signed char)63;
signed char var_18 = (signed char)9;
unsigned short var_19 = (unsigned short)25631;
int zero = 0;
unsigned int var_20 = 2480677606U;
signed char var_21 = (signed char)41;
signed char var_22 = (signed char)99;
void init() {
}

void checksum() {
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
