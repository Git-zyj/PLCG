#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4935554661589842998LL;
int var_8 = -1594458646;
short var_10 = (short)6958;
unsigned short var_12 = (unsigned short)523;
unsigned short var_13 = (unsigned short)9480;
short var_15 = (short)-6034;
int zero = 0;
unsigned long long int var_19 = 13136804251627614320ULL;
signed char var_20 = (signed char)92;
unsigned short var_21 = (unsigned short)15747;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
