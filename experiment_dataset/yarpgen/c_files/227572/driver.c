#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15969;
unsigned short var_2 = (unsigned short)37608;
unsigned char var_3 = (unsigned char)144;
unsigned short var_6 = (unsigned short)4140;
long long int var_7 = -690817702759418360LL;
int zero = 0;
signed char var_20 = (signed char)84;
unsigned char var_21 = (unsigned char)47;
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
