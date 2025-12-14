#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21893;
short var_3 = (short)29785;
short var_5 = (short)1657;
short var_6 = (short)-8275;
short var_8 = (short)-31433;
short var_9 = (short)30379;
short var_14 = (short)6053;
short var_15 = (short)27366;
short var_17 = (short)-3695;
int zero = 0;
short var_20 = (short)16127;
short var_21 = (short)-846;
short var_22 = (short)3272;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
