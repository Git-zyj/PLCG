#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8702;
long long int var_4 = 1332535677022908436LL;
long long int var_5 = -2829168369590055532LL;
signed char var_6 = (signed char)-68;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)61576;
long long int var_12 = 1311639554495886911LL;
int zero = 0;
unsigned long long int var_14 = 15934376810310444533ULL;
int var_15 = 1920471433;
long long int var_16 = 7100973920870205880LL;
void init() {
}

void checksum() {
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
