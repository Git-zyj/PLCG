#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2410559958524710942LL;
unsigned int var_5 = 2927030702U;
unsigned char var_11 = (unsigned char)83;
unsigned int var_12 = 4186291072U;
int zero = 0;
long long int var_13 = -1420938147223684736LL;
unsigned short var_14 = (unsigned short)18911;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
