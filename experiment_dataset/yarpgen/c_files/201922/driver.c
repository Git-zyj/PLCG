#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10373;
short var_3 = (short)-22167;
unsigned int var_6 = 1183119444U;
long long int var_9 = -9221768115358667612LL;
int zero = 0;
signed char var_13 = (signed char)-38;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-23901;
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
