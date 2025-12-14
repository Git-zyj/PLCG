#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14757;
long long int var_3 = -8438910986257241296LL;
unsigned short var_4 = (unsigned short)53578;
unsigned char var_6 = (unsigned char)186;
unsigned long long int var_7 = 14444945652719121428ULL;
int zero = 0;
int var_13 = 1548390769;
unsigned int var_14 = 412968190U;
long long int var_15 = 5701773893291680399LL;
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
