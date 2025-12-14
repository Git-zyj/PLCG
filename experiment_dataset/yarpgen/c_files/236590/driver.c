#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 592088796U;
long long int var_1 = 5153409371296165401LL;
unsigned short var_4 = (unsigned short)17259;
unsigned short var_7 = (unsigned short)62436;
long long int var_8 = -8760031781426749636LL;
int var_9 = -1889882014;
int zero = 0;
unsigned long long int var_14 = 11978519357037252048ULL;
unsigned int var_15 = 4161793353U;
unsigned int var_16 = 1488346212U;
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
