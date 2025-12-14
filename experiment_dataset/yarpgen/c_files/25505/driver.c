#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)46086;
short var_6 = (short)-31259;
signed char var_7 = (signed char)-33;
unsigned int var_8 = 2234359665U;
unsigned int var_9 = 3990411115U;
unsigned int var_10 = 2353154805U;
short var_12 = (short)23943;
int zero = 0;
unsigned char var_13 = (unsigned char)188;
short var_14 = (short)23613;
unsigned short var_15 = (unsigned short)8843;
unsigned int var_16 = 2972765881U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
