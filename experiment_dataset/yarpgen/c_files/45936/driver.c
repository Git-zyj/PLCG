#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3385776967U;
unsigned int var_5 = 2337835388U;
signed char var_8 = (signed char)-80;
unsigned int var_14 = 856953386U;
int zero = 0;
short var_15 = (short)29603;
unsigned short var_16 = (unsigned short)40045;
unsigned long long int var_17 = 363796832610468228ULL;
void init() {
}

void checksum() {
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
