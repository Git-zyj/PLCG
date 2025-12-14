#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56577;
signed char var_4 = (signed char)56;
long long int var_6 = -5540812545642333082LL;
unsigned char var_12 = (unsigned char)12;
int var_14 = -225558681;
int zero = 0;
short var_16 = (short)-9614;
unsigned char var_17 = (unsigned char)40;
unsigned char var_18 = (unsigned char)201;
void init() {
}

void checksum() {
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
