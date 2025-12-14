#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5046;
unsigned long long int var_6 = 1523244002037627948ULL;
unsigned short var_7 = (unsigned short)32271;
short var_11 = (short)-23434;
unsigned short var_13 = (unsigned short)48422;
unsigned short var_18 = (unsigned short)8647;
int zero = 0;
unsigned short var_19 = (unsigned short)57357;
unsigned long long int var_20 = 8738321597739852305ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
