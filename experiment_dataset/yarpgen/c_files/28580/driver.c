#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3351491932U;
unsigned int var_3 = 2518185189U;
long long int var_5 = -8520610205680497594LL;
int var_8 = -971293520;
unsigned int var_11 = 1776425101U;
unsigned char var_17 = (unsigned char)33;
int zero = 0;
int var_19 = -1035661346;
int var_20 = -1483612839;
short var_21 = (short)-7311;
unsigned char var_22 = (unsigned char)169;
short var_23 = (short)-18442;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
