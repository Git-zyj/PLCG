#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4953769922850819473LL;
unsigned char var_4 = (unsigned char)97;
short var_6 = (short)-4132;
short var_12 = (short)-4414;
int zero = 0;
short var_17 = (short)5847;
unsigned int var_18 = 331955051U;
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
