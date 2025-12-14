#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64824;
unsigned int var_12 = 1489204289U;
int var_13 = 247996551;
short var_15 = (short)11854;
signed char var_17 = (signed char)-8;
int zero = 0;
unsigned char var_18 = (unsigned char)35;
unsigned int var_19 = 1927645529U;
void init() {
}

void checksum() {
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
