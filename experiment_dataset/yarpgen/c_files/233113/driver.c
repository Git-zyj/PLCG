#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23907;
unsigned char var_2 = (unsigned char)178;
unsigned int var_3 = 3368457601U;
unsigned char var_5 = (unsigned char)221;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 554782315;
unsigned char var_17 = (unsigned char)86;
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
