#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
short var_4 = (short)-31153;
short var_8 = (short)-13012;
short var_10 = (short)25712;
unsigned short var_17 = (unsigned short)65036;
int zero = 0;
unsigned int var_19 = 2982917128U;
short var_20 = (short)17929;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
