#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 641981125U;
unsigned short var_1 = (unsigned short)22289;
_Bool var_2 = (_Bool)0;
unsigned short var_6 = (unsigned short)23398;
unsigned int var_7 = 440700230U;
unsigned int var_10 = 2109243152U;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)168;
int zero = 0;
int var_14 = -1749759954;
unsigned char var_15 = (unsigned char)146;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-9112;
long long int var_18 = -1755038518272756046LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
