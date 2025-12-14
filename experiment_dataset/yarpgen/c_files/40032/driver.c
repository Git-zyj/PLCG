#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32341;
short var_5 = (short)-31535;
unsigned short var_7 = (unsigned short)11203;
signed char var_11 = (signed char)-26;
int zero = 0;
short var_13 = (short)22823;
unsigned char var_14 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
