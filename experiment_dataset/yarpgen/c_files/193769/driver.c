#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-119;
short var_5 = (short)-18338;
unsigned short var_6 = (unsigned short)54748;
unsigned short var_9 = (unsigned short)59239;
signed char var_16 = (signed char)65;
int zero = 0;
signed char var_20 = (signed char)-4;
unsigned char var_21 = (unsigned char)131;
unsigned long long int var_22 = 6512293014482433799ULL;
unsigned char var_23 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
