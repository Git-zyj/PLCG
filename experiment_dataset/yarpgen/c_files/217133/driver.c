#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43643;
unsigned long long int var_10 = 3097207190448046730ULL;
short var_12 = (short)-209;
unsigned long long int var_13 = 11682213314777672345ULL;
unsigned int var_14 = 63652043U;
int zero = 0;
unsigned short var_16 = (unsigned short)60090;
unsigned int var_17 = 263645760U;
void init() {
}

void checksum() {
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
