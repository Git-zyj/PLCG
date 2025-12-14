#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3257002451893776463ULL;
short var_8 = (short)-6008;
unsigned int var_9 = 2464382383U;
long long int var_12 = 1307003486293595389LL;
unsigned char var_13 = (unsigned char)171;
unsigned char var_14 = (unsigned char)46;
short var_16 = (short)22291;
int zero = 0;
long long int var_17 = -5301019194521993747LL;
signed char var_18 = (signed char)-83;
void init() {
}

void checksum() {
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
