#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3555358352U;
unsigned int var_5 = 799121669U;
unsigned short var_7 = (unsigned short)18392;
short var_8 = (short)-20801;
short var_16 = (short)-6757;
int zero = 0;
int var_17 = -1755560749;
unsigned int var_18 = 3871887802U;
short var_19 = (short)-32645;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
