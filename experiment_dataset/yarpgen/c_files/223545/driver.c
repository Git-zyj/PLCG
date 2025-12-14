#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15659;
short var_3 = (short)12435;
long long int var_13 = -8041260640229061077LL;
unsigned short var_16 = (unsigned short)2111;
int zero = 0;
int var_19 = 279125480;
unsigned short var_20 = (unsigned short)50970;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
