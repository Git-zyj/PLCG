#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2136;
unsigned short var_3 = (unsigned short)18117;
unsigned char var_6 = (unsigned char)249;
unsigned char var_10 = (unsigned char)212;
int zero = 0;
unsigned char var_14 = (unsigned char)29;
signed char var_15 = (signed char)23;
unsigned int var_16 = 1119058789U;
unsigned short var_17 = (unsigned short)4807;
unsigned short var_18 = (unsigned short)40319;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
