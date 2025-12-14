#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6646;
long long int var_1 = 1828812117085847231LL;
short var_4 = (short)-22804;
long long int var_5 = 6139266694469234050LL;
short var_7 = (short)19621;
long long int var_15 = 8550998590210495361LL;
short var_16 = (short)-4202;
short var_18 = (short)-7988;
int zero = 0;
long long int var_19 = -7143416194870033225LL;
short var_20 = (short)-12892;
short var_21 = (short)-8877;
short var_22 = (short)-11452;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
