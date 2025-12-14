#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-68;
short var_6 = (short)-29730;
unsigned char var_11 = (unsigned char)53;
unsigned char var_15 = (unsigned char)3;
int zero = 0;
signed char var_16 = (signed char)71;
unsigned char var_17 = (unsigned char)19;
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
