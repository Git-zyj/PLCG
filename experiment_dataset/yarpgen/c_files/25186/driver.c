#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 633578555;
unsigned int var_4 = 4220932079U;
unsigned short var_15 = (unsigned short)56924;
int zero = 0;
short var_16 = (short)-5893;
short var_17 = (short)13025;
unsigned long long int var_18 = 10993729999554512371ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
