#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4093083884549177330LL;
unsigned short var_2 = (unsigned short)54133;
short var_5 = (short)6721;
short var_8 = (short)-5512;
long long int var_10 = -2589228802070733572LL;
int zero = 0;
int var_15 = -141428380;
unsigned short var_16 = (unsigned short)33739;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
