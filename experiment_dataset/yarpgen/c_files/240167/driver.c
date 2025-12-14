#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
short var_1 = (short)11757;
unsigned char var_5 = (unsigned char)127;
short var_8 = (short)-23727;
unsigned int var_12 = 1516738461U;
signed char var_13 = (signed char)95;
int zero = 0;
unsigned int var_17 = 4241001701U;
unsigned long long int var_18 = 17702834274628300218ULL;
unsigned int var_19 = 460597218U;
signed char var_20 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
