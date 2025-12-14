#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11884;
short var_1 = (short)-31370;
short var_2 = (short)-8257;
int var_3 = -654834038;
short var_6 = (short)-16761;
short var_9 = (short)9479;
short var_11 = (short)-14483;
short var_12 = (short)-19654;
int var_13 = 836605620;
int var_14 = -52033000;
int var_15 = 1198109872;
int var_17 = 1310978805;
short var_18 = (short)-24206;
int zero = 0;
int var_20 = -245466545;
int var_21 = -1549683976;
short var_22 = (short)-24936;
short var_23 = (short)28230;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
