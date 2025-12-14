#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
short var_3 = (short)6506;
unsigned int var_4 = 289542805U;
signed char var_5 = (signed char)121;
short var_8 = (short)-9376;
unsigned int var_9 = 928814171U;
unsigned int var_10 = 752835760U;
int zero = 0;
unsigned int var_12 = 2555782984U;
unsigned long long int var_13 = 3503601921100203947ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
