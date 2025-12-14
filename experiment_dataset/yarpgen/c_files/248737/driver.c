#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1188981866;
int var_6 = 183778442;
unsigned long long int var_8 = 4933498467558268989ULL;
short var_12 = (short)-14960;
unsigned long long int var_13 = 9308872206101880660ULL;
unsigned short var_15 = (unsigned short)47443;
int zero = 0;
int var_18 = 808700770;
signed char var_19 = (signed char)-86;
signed char var_20 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
