#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
long long int var_2 = -8935910920744345971LL;
long long int var_5 = -7209197692173381332LL;
short var_8 = (short)2520;
signed char var_10 = (signed char)5;
long long int var_11 = 7492043413398996532LL;
unsigned short var_12 = (unsigned short)19609;
unsigned long long int var_14 = 2466647610023494332ULL;
int zero = 0;
unsigned long long int var_16 = 14112499763154735586ULL;
signed char var_17 = (signed char)23;
signed char var_18 = (signed char)-124;
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
