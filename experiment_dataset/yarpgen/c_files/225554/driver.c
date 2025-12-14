#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
long long int var_1 = -7384952728607908324LL;
short var_3 = (short)-16200;
int var_4 = -712034351;
unsigned int var_11 = 2910856841U;
int var_12 = -1385824764;
unsigned char var_14 = (unsigned char)31;
int zero = 0;
unsigned short var_15 = (unsigned short)60407;
unsigned long long int var_16 = 2854960232307778847ULL;
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
