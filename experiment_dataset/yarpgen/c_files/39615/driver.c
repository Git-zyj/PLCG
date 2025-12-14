#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
unsigned int var_4 = 2617843837U;
int var_6 = 1678802354;
unsigned long long int var_12 = 2950650761767219959ULL;
unsigned char var_13 = (unsigned char)55;
unsigned int var_16 = 4076048324U;
int zero = 0;
short var_17 = (short)-1723;
long long int var_18 = -2923889528493248458LL;
unsigned int var_19 = 1115963931U;
_Bool var_20 = (_Bool)0;
int var_21 = 2043410307;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
