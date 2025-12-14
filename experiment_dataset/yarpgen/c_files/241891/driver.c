#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)41152;
unsigned short var_8 = (unsigned short)64092;
short var_10 = (short)-2907;
int zero = 0;
int var_16 = -1541509405;
short var_17 = (short)-13025;
unsigned short var_18 = (unsigned short)28163;
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
