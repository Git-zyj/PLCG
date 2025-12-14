#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-6855;
unsigned int var_5 = 1775426741U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 806510262U;
short var_10 = (short)27905;
short var_11 = (short)-29996;
int var_12 = -542030301;
unsigned char var_13 = (unsigned char)102;
int zero = 0;
int var_14 = -523811041;
_Bool var_15 = (_Bool)1;
short var_16 = (short)6847;
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
