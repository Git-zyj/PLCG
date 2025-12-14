#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)132;
signed char var_5 = (signed char)-89;
signed char var_8 = (signed char)5;
short var_10 = (short)21037;
short var_12 = (short)-21385;
unsigned int var_14 = 1626553723U;
int zero = 0;
short var_15 = (short)5038;
signed char var_16 = (signed char)19;
signed char var_17 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
