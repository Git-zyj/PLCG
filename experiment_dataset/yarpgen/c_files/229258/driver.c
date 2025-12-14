#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60548;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)24221;
unsigned short var_11 = (unsigned short)16035;
short var_12 = (short)25254;
int zero = 0;
unsigned long long int var_16 = 14419150540004331419ULL;
short var_17 = (short)-15473;
void init() {
}

void checksum() {
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
