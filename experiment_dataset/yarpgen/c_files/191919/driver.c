#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)164;
unsigned short var_9 = (unsigned short)12725;
int var_10 = -172103165;
signed char var_11 = (signed char)87;
int zero = 0;
unsigned int var_15 = 3005843389U;
int var_16 = -712648205;
void init() {
}

void checksum() {
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
