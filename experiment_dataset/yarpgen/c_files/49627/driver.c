#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3122067547U;
unsigned char var_2 = (unsigned char)187;
int var_4 = 730805473;
long long int var_5 = -8195715169693437943LL;
signed char var_6 = (signed char)87;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-28705;
long long int var_16 = -4997013082508984632LL;
unsigned short var_17 = (unsigned short)39551;
int zero = 0;
unsigned char var_19 = (unsigned char)129;
long long int var_20 = -4896117198204808094LL;
_Bool var_21 = (_Bool)0;
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
