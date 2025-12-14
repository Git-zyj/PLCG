#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)6724;
unsigned long long int var_6 = 11028324562764784728ULL;
unsigned long long int var_8 = 9203696283736599112ULL;
signed char var_9 = (signed char)11;
unsigned short var_13 = (unsigned short)16729;
int zero = 0;
signed char var_16 = (signed char)-61;
short var_17 = (short)19902;
unsigned long long int var_18 = 11236119300807237602ULL;
unsigned long long int var_19 = 16358509106320662924ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
