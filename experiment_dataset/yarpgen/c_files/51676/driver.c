#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41992;
unsigned int var_1 = 1625009618U;
unsigned char var_5 = (unsigned char)158;
signed char var_6 = (signed char)17;
signed char var_7 = (signed char)90;
signed char var_8 = (signed char)27;
unsigned char var_11 = (unsigned char)168;
signed char var_13 = (signed char)103;
int zero = 0;
int var_15 = 1767177294;
int var_16 = -1787808654;
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
