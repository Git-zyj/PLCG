#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21691;
signed char var_1 = (signed char)-11;
unsigned short var_3 = (unsigned short)44332;
unsigned long long int var_4 = 168135045299622309ULL;
unsigned short var_6 = (unsigned short)35945;
signed char var_11 = (signed char)120;
int zero = 0;
int var_12 = -71996593;
unsigned int var_13 = 487456322U;
int var_14 = 1361809065;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
