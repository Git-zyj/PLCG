#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)147;
unsigned long long int var_2 = 18319783737356669198ULL;
short var_6 = (short)-6258;
signed char var_7 = (signed char)32;
unsigned int var_8 = 252172831U;
short var_12 = (short)16846;
int zero = 0;
short var_19 = (short)-19458;
unsigned short var_20 = (unsigned short)30194;
signed char var_21 = (signed char)74;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
