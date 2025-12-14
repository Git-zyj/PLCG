#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)198;
unsigned short var_7 = (unsigned short)1402;
unsigned int var_9 = 1471859883U;
short var_11 = (short)-31326;
unsigned short var_14 = (unsigned short)48764;
long long int var_17 = -2828781209648970097LL;
int zero = 0;
short var_20 = (short)16029;
unsigned long long int var_21 = 6671928361358145768ULL;
unsigned char var_22 = (unsigned char)115;
short var_23 = (short)26334;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
