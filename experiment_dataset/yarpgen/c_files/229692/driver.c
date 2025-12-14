#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)6936;
unsigned char var_7 = (unsigned char)160;
int var_11 = -360118970;
int zero = 0;
unsigned short var_12 = (unsigned short)38324;
long long int var_13 = 1357320130031339347LL;
unsigned char var_14 = (unsigned char)30;
unsigned char var_15 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
