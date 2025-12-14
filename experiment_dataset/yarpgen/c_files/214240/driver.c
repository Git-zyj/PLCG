#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15587975088474680190ULL;
unsigned char var_1 = (unsigned char)141;
unsigned char var_4 = (unsigned char)250;
short var_6 = (short)-8461;
unsigned char var_12 = (unsigned char)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)14824;
void init() {
}

void checksum() {
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
