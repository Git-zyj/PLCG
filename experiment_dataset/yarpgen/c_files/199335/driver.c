#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1991459299;
unsigned short var_9 = (unsigned short)4098;
unsigned char var_11 = (unsigned char)179;
short var_13 = (short)-29180;
int zero = 0;
short var_16 = (short)-5440;
unsigned int var_17 = 783755793U;
short var_18 = (short)15535;
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
