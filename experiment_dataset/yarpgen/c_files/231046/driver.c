#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
short var_4 = (short)21731;
unsigned char var_6 = (unsigned char)58;
unsigned short var_7 = (unsigned short)30817;
long long int var_8 = 5463665478650090934LL;
int var_11 = -1396276661;
short var_13 = (short)17447;
int zero = 0;
unsigned char var_14 = (unsigned char)117;
int var_15 = -1433254201;
void init() {
}

void checksum() {
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
