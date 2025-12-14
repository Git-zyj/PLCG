#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1374917994401986792ULL;
int var_5 = -1651553422;
int var_11 = 878653535;
int var_15 = 613667970;
int zero = 0;
unsigned int var_17 = 2246649406U;
unsigned short var_18 = (unsigned short)56067;
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
