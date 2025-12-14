#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2088984053;
unsigned long long int var_1 = 15258454964607283377ULL;
unsigned int var_5 = 1374863967U;
signed char var_9 = (signed char)116;
int zero = 0;
short var_10 = (short)1654;
int var_11 = -1781976276;
int var_12 = -584512516;
unsigned long long int var_13 = 16315264697524400231ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
