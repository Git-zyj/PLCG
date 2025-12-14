#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8597940066449411577LL;
signed char var_6 = (signed char)122;
int zero = 0;
unsigned short var_12 = (unsigned short)13994;
short var_13 = (short)6484;
unsigned int var_14 = 4235862819U;
unsigned short var_15 = (unsigned short)51236;
void init() {
}

void checksum() {
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
