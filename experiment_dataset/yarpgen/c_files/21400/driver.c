#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)-49;
unsigned short var_6 = (unsigned short)9961;
unsigned short var_12 = (unsigned short)49887;
unsigned int var_15 = 1027356466U;
unsigned long long int var_19 = 5859426695784887357ULL;
int zero = 0;
signed char var_20 = (signed char)66;
long long int var_21 = -5758033623667947952LL;
unsigned long long int var_22 = 18018187819672007585ULL;
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
