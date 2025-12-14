#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2748;
unsigned char var_2 = (unsigned char)166;
short var_3 = (short)-14864;
unsigned char var_10 = (unsigned char)44;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-21819;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-25;
void init() {
}

void checksum() {
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
