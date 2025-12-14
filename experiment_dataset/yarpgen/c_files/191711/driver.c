#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)146;
int var_3 = 127855421;
int var_4 = -1628647821;
short var_5 = (short)28588;
long long int var_11 = -7046394451915595078LL;
int zero = 0;
unsigned char var_12 = (unsigned char)117;
int var_13 = -1951936745;
short var_14 = (short)-17731;
long long int var_15 = -6049496966902773958LL;
unsigned char var_16 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
