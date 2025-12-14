#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-20705;
short var_9 = (short)18656;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-18365;
int zero = 0;
unsigned char var_16 = (unsigned char)184;
unsigned int var_17 = 1570805798U;
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
