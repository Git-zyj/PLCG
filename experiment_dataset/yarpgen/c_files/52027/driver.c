#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2720693822U;
unsigned int var_4 = 2403147298U;
unsigned char var_9 = (unsigned char)60;
unsigned int var_13 = 2212960318U;
unsigned char var_16 = (unsigned char)241;
int zero = 0;
short var_17 = (short)1109;
unsigned int var_18 = 4239969343U;
short var_19 = (short)-21559;
void init() {
}

void checksum() {
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
