#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_5 = (short)19355;
unsigned short var_8 = (unsigned short)24650;
int var_10 = 622673522;
unsigned char var_11 = (unsigned char)189;
int zero = 0;
short var_14 = (short)-20140;
unsigned short var_15 = (unsigned short)46540;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
