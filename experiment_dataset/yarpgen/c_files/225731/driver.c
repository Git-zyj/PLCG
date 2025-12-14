#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12222;
unsigned char var_4 = (unsigned char)28;
int var_7 = 742745408;
signed char var_8 = (signed char)-50;
int zero = 0;
signed char var_16 = (signed char)95;
long long int var_17 = -7774483191025618002LL;
signed char var_18 = (signed char)-48;
signed char var_19 = (signed char)-91;
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
