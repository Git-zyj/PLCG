#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)122;
unsigned long long int var_6 = 15050081856481804305ULL;
long long int var_10 = -4743725874540808568LL;
long long int var_11 = -4182331213957368084LL;
unsigned short var_12 = (unsigned short)23947;
unsigned short var_14 = (unsigned short)1918;
int zero = 0;
short var_15 = (short)17084;
unsigned int var_16 = 2153774792U;
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
