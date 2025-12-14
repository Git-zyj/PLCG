#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3050332453U;
signed char var_4 = (signed char)24;
signed char var_5 = (signed char)116;
int var_6 = -1495552014;
long long int var_11 = 8582048266741343939LL;
unsigned char var_12 = (unsigned char)61;
signed char var_14 = (signed char)-53;
int zero = 0;
unsigned short var_15 = (unsigned short)44256;
signed char var_16 = (signed char)-75;
long long int var_17 = 6168195646097178701LL;
short var_18 = (short)-18816;
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
