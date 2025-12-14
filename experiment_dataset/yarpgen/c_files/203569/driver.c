#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18033;
unsigned int var_11 = 2063038146U;
short var_12 = (short)8030;
short var_14 = (short)20609;
int zero = 0;
short var_15 = (short)19540;
short var_16 = (short)-27119;
unsigned short var_17 = (unsigned short)9128;
unsigned int var_18 = 4008222548U;
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
