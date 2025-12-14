#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1496614247U;
short var_1 = (short)-29631;
signed char var_2 = (signed char)56;
short var_8 = (short)24338;
signed char var_9 = (signed char)-70;
int var_10 = 618955079;
int zero = 0;
int var_14 = -1962017906;
unsigned int var_15 = 472112693U;
void init() {
}

void checksum() {
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
