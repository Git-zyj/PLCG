#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15151667103609136613ULL;
short var_1 = (short)-7710;
long long int var_4 = 1506369987690584266LL;
int zero = 0;
signed char var_14 = (signed char)-98;
short var_15 = (short)31133;
unsigned int var_16 = 4277026209U;
unsigned long long int var_17 = 1688878374917253176ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
