#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1344856053;
unsigned char var_2 = (unsigned char)160;
unsigned long long int var_4 = 14766154137132154413ULL;
unsigned short var_6 = (unsigned short)46146;
signed char var_8 = (signed char)-88;
int var_10 = 1593810856;
int zero = 0;
int var_15 = 881486057;
signed char var_16 = (signed char)-68;
unsigned short var_17 = (unsigned short)11303;
unsigned short var_18 = (unsigned short)34182;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
