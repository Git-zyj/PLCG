#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
unsigned char var_1 = (unsigned char)101;
long long int var_8 = -3058324890027149175LL;
long long int var_10 = 4626537594260644484LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 981347817814705264LL;
short var_13 = (short)-10115;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
