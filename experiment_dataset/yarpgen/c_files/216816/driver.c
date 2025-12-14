#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -239960971;
_Bool var_2 = (_Bool)1;
short var_8 = (short)-317;
short var_12 = (short)-23623;
short var_14 = (short)1152;
int zero = 0;
unsigned int var_15 = 3237458632U;
int var_16 = 1219018123;
unsigned char var_17 = (unsigned char)9;
void init() {
}

void checksum() {
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
