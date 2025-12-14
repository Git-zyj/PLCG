#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)244;
short var_12 = (short)-15582;
short var_13 = (short)19920;
int var_14 = 140900907;
int zero = 0;
unsigned char var_16 = (unsigned char)48;
int var_17 = -265896441;
unsigned int var_18 = 3368562826U;
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
