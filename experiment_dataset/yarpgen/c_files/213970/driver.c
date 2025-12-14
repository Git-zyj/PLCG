#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)24792;
signed char var_8 = (signed char)83;
long long int var_10 = -4504723911376563267LL;
unsigned char var_11 = (unsigned char)191;
short var_12 = (short)12828;
int zero = 0;
short var_13 = (short)-17150;
short var_14 = (short)-13627;
unsigned int var_15 = 1619791287U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
