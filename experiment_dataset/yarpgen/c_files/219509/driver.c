#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-15592;
short var_8 = (short)-14986;
short var_9 = (short)25548;
unsigned char var_13 = (unsigned char)168;
int zero = 0;
unsigned char var_15 = (unsigned char)129;
short var_16 = (short)-29103;
short var_17 = (short)31895;
short var_18 = (short)-29360;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
