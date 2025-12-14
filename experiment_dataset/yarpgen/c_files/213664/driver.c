#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1422483871;
unsigned char var_3 = (unsigned char)56;
unsigned int var_5 = 559767314U;
_Bool var_7 = (_Bool)1;
short var_11 = (short)20164;
int zero = 0;
unsigned short var_12 = (unsigned short)29727;
unsigned long long int var_13 = 2869655086315076859ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
