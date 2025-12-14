#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4005894326U;
unsigned short var_3 = (unsigned short)17263;
short var_11 = (short)-7096;
int zero = 0;
unsigned long long int var_12 = 9810518520438536597ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3472252395U;
unsigned short var_15 = (unsigned short)46807;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
