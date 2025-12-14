#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7576558526178470751LL;
long long int var_13 = 1384936966782672193LL;
short var_14 = (short)-17229;
int zero = 0;
unsigned short var_17 = (unsigned short)53338;
unsigned short var_18 = (unsigned short)4935;
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
