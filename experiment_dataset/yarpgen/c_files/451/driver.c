#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2213980417U;
unsigned int var_6 = 455922770U;
long long int var_9 = 1213460224008820313LL;
int zero = 0;
unsigned int var_16 = 2326442658U;
short var_17 = (short)27795;
unsigned short var_18 = (unsigned short)33609;
unsigned long long int var_19 = 18082560909374389152ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
