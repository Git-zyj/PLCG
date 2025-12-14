#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 623097436;
unsigned char var_3 = (unsigned char)88;
short var_8 = (short)28048;
int zero = 0;
int var_16 = 1804022595;
unsigned int var_17 = 1726956346U;
unsigned short var_18 = (unsigned short)9555;
unsigned short var_19 = (unsigned short)63718;
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
