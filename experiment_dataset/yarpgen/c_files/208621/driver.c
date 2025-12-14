#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-79;
long long int var_8 = 4657174395566425424LL;
unsigned short var_10 = (unsigned short)2037;
unsigned int var_13 = 90743823U;
int zero = 0;
unsigned short var_14 = (unsigned short)20549;
unsigned short var_15 = (unsigned short)48537;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6244573658409215535LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
