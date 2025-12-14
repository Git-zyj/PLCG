#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
short var_4 = (short)-8240;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 317825130997882354ULL;
unsigned int var_9 = 1062223777U;
short var_10 = (short)-6045;
int zero = 0;
unsigned short var_11 = (unsigned short)45988;
unsigned char var_12 = (unsigned char)173;
unsigned short var_13 = (unsigned short)26159;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
