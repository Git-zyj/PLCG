#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53449;
short var_3 = (short)-16084;
unsigned short var_5 = (unsigned short)43923;
unsigned char var_6 = (unsigned char)140;
int var_9 = -636743184;
int zero = 0;
long long int var_10 = -1369492469095444916LL;
unsigned short var_11 = (unsigned short)48908;
unsigned int var_12 = 1993007554U;
unsigned short var_13 = (unsigned short)33107;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
