#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5159753346067784364LL;
long long int var_12 = -6230936851848867991LL;
unsigned short var_15 = (unsigned short)21257;
long long int var_18 = -8778612112488329982LL;
int zero = 0;
unsigned short var_20 = (unsigned short)25429;
unsigned short var_21 = (unsigned short)41857;
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
