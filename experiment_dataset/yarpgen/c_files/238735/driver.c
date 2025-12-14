#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)189;
int var_4 = 1894512927;
short var_6 = (short)-12534;
unsigned long long int var_7 = 9643782901801004672ULL;
signed char var_9 = (signed char)29;
int zero = 0;
long long int var_13 = -1400447713844068480LL;
unsigned char var_14 = (unsigned char)168;
unsigned char var_15 = (unsigned char)166;
unsigned long long int var_16 = 10496686933931373464ULL;
unsigned short var_17 = (unsigned short)43656;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
