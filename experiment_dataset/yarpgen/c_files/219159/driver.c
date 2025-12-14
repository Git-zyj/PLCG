#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
unsigned short var_3 = (unsigned short)44337;
short var_6 = (short)-10287;
signed char var_7 = (signed char)91;
signed char var_10 = (signed char)104;
int zero = 0;
signed char var_14 = (signed char)92;
int var_15 = 936664120;
unsigned int var_16 = 2245621736U;
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
