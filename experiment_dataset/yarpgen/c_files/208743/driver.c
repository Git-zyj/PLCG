#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22121;
unsigned char var_2 = (unsigned char)144;
signed char var_6 = (signed char)79;
signed char var_12 = (signed char)-82;
int zero = 0;
short var_13 = (short)20692;
short var_14 = (short)-31640;
short var_15 = (short)20235;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
