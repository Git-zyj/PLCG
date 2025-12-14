#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6387320477855904861ULL;
short var_1 = (short)-9005;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int var_6 = -1408393623;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 4248892940U;
unsigned char var_11 = (unsigned char)48;
unsigned short var_12 = (unsigned short)59989;
int zero = 0;
unsigned short var_13 = (unsigned short)23385;
short var_14 = (short)4790;
int var_15 = -959667237;
long long int var_16 = -2475414745788290908LL;
unsigned long long int var_17 = 6256005603632871608ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
