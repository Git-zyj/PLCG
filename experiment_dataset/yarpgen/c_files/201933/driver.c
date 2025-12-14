#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4205356661U;
unsigned long long int var_3 = 607244295162153177ULL;
int var_6 = 1679683376;
int var_18 = -1962954595;
int zero = 0;
short var_20 = (short)30495;
int var_21 = -1651285847;
unsigned short var_22 = (unsigned short)39185;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
