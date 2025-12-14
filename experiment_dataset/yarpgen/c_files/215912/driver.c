#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5256;
signed char var_2 = (signed char)-11;
unsigned int var_6 = 3129063081U;
unsigned long long int var_16 = 1690509729134953187ULL;
int zero = 0;
unsigned int var_17 = 3414825985U;
unsigned char var_18 = (unsigned char)100;
void init() {
}

void checksum() {
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
