#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13989;
unsigned short var_2 = (unsigned short)63137;
int var_5 = -1978919123;
long long int var_6 = -4658847849003571592LL;
short var_7 = (short)-15515;
int var_9 = -323473830;
short var_12 = (short)-18371;
unsigned short var_13 = (unsigned short)45419;
int var_15 = -2009493709;
int zero = 0;
signed char var_16 = (signed char)61;
short var_17 = (short)-4013;
int var_18 = -1849791578;
void init() {
}

void checksum() {
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
