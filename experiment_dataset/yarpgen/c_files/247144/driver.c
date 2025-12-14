#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20913;
unsigned int var_10 = 1703716564U;
unsigned short var_18 = (unsigned short)25228;
unsigned char var_19 = (unsigned char)170;
int zero = 0;
short var_20 = (short)-16827;
unsigned short var_21 = (unsigned short)44878;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
