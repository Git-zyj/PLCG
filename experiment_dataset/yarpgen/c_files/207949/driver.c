#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18758;
unsigned short var_1 = (unsigned short)5103;
unsigned short var_2 = (unsigned short)33003;
short var_3 = (short)-13798;
short var_6 = (short)-18418;
int var_10 = -1395081002;
int var_13 = 1830709667;
int var_16 = -1964193350;
int zero = 0;
unsigned long long int var_18 = 14667801408626196341ULL;
unsigned char var_19 = (unsigned char)30;
unsigned int var_20 = 2601983589U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
