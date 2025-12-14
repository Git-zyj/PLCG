#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2961238860462795351LL;
unsigned int var_5 = 3235002726U;
unsigned char var_6 = (unsigned char)88;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-85;
short var_14 = (short)-18199;
unsigned char var_17 = (unsigned char)160;
int zero = 0;
unsigned long long int var_19 = 5071591409621142816ULL;
int var_20 = -1727454341;
unsigned int var_21 = 1443529420U;
unsigned char var_22 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
