#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24853;
unsigned int var_1 = 1058924930U;
int var_3 = 1305322036;
unsigned short var_7 = (unsigned short)50332;
int var_11 = 1020147984;
short var_12 = (short)27305;
int zero = 0;
signed char var_13 = (signed char)79;
int var_14 = -319803813;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
