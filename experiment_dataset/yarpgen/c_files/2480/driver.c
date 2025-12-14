#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26012;
unsigned short var_2 = (unsigned short)46584;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-17736;
unsigned int var_7 = 3687340001U;
unsigned long long int var_8 = 12017445140051304335ULL;
int zero = 0;
unsigned int var_11 = 2342079010U;
signed char var_12 = (signed char)-113;
unsigned short var_13 = (unsigned short)30791;
unsigned long long int var_14 = 14711691936366318324ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
