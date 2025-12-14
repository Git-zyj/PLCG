#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-35;
unsigned short var_2 = (unsigned short)18124;
unsigned long long int var_3 = 2216348460546100253ULL;
unsigned int var_8 = 1009558681U;
unsigned char var_11 = (unsigned char)59;
long long int var_13 = -2888081246561512759LL;
int zero = 0;
unsigned short var_14 = (unsigned short)41362;
unsigned int var_15 = 4164984098U;
short var_16 = (short)-20592;
signed char var_17 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
