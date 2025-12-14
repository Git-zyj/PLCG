#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8129;
short var_4 = (short)10765;
int var_12 = 1664326916;
signed char var_14 = (signed char)110;
int zero = 0;
long long int var_15 = -3384496689252524499LL;
int var_16 = -1840779734;
long long int var_17 = -4265441509451321461LL;
short var_18 = (short)8305;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
