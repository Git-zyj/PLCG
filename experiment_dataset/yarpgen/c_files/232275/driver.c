#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56564;
short var_1 = (short)7968;
int var_12 = 298153469;
unsigned long long int var_15 = 17906968129639040676ULL;
int zero = 0;
int var_18 = 876543621;
unsigned int var_19 = 2690339523U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
