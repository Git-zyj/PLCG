#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1067408290058433527LL;
unsigned short var_3 = (unsigned short)31881;
signed char var_4 = (signed char)55;
signed char var_5 = (signed char)106;
short var_6 = (short)6899;
unsigned short var_8 = (unsigned short)63510;
long long int var_9 = 3338025410877816616LL;
short var_10 = (short)-18819;
int zero = 0;
int var_11 = -740524180;
unsigned long long int var_12 = 2712440345602185680ULL;
short var_13 = (short)-29710;
long long int var_14 = -5688621092061643991LL;
unsigned short var_15 = (unsigned short)16634;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
