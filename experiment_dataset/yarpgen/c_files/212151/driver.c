#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8867780925881724778LL;
short var_1 = (short)-6942;
short var_5 = (short)-23069;
unsigned short var_7 = (unsigned short)18088;
int zero = 0;
long long int var_10 = -8837395211320370008LL;
short var_11 = (short)-24686;
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
