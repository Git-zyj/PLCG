#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46329;
short var_4 = (short)22054;
int var_5 = 571893264;
int zero = 0;
signed char var_16 = (signed char)109;
unsigned short var_17 = (unsigned short)23546;
long long int var_18 = -4133915832429508080LL;
short var_19 = (short)-13314;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
