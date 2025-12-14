#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4208209735986037034LL;
long long int var_8 = 2242069781810331298LL;
int zero = 0;
unsigned int var_18 = 1331058619U;
unsigned short var_19 = (unsigned short)34627;
long long int var_20 = 8023459034335577510LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
