#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10470;
signed char var_3 = (signed char)37;
short var_6 = (short)-16908;
short var_7 = (short)29324;
unsigned short var_12 = (unsigned short)9458;
int zero = 0;
unsigned int var_14 = 1259687382U;
long long int var_15 = 3470754624720928309LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
