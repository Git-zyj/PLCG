#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24843;
unsigned long long int var_4 = 7372579076602229353ULL;
short var_14 = (short)-28931;
unsigned long long int var_16 = 1148112200269161859ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)9110;
short var_18 = (short)-30977;
void init() {
}

void checksum() {
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
