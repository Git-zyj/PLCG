#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-48;
unsigned int var_3 = 3644684517U;
unsigned long long int var_5 = 5273051662321961314ULL;
unsigned char var_14 = (unsigned char)97;
unsigned long long int var_15 = 5109691757964627085ULL;
unsigned int var_16 = 4253206659U;
signed char var_18 = (signed char)87;
short var_19 = (short)25060;
int zero = 0;
unsigned short var_20 = (unsigned short)4642;
unsigned int var_21 = 2816658982U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
