#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9110645391895689231LL;
short var_8 = (short)-4755;
unsigned char var_13 = (unsigned char)230;
int zero = 0;
long long int var_15 = 657844769199679234LL;
unsigned char var_16 = (unsigned char)160;
unsigned int var_17 = 1722184212U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
