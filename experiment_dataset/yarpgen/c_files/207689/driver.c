#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8781886415629365480LL;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 771078109U;
signed char var_7 = (signed char)-36;
short var_9 = (short)11387;
unsigned short var_10 = (unsigned short)26245;
signed char var_11 = (signed char)-106;
int zero = 0;
short var_13 = (short)2106;
unsigned short var_14 = (unsigned short)36707;
short var_15 = (short)29445;
unsigned short var_16 = (unsigned short)1753;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
