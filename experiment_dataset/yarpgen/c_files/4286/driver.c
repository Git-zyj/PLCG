#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4922257437286489271LL;
unsigned short var_2 = (unsigned short)7530;
unsigned int var_3 = 3389333560U;
unsigned char var_6 = (unsigned char)218;
int zero = 0;
long long int var_10 = -2318805847707759054LL;
unsigned short var_11 = (unsigned short)9025;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
