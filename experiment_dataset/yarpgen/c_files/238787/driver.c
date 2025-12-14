#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 453008819U;
short var_6 = (short)12014;
unsigned int var_13 = 1079720008U;
signed char var_14 = (signed char)-100;
int zero = 0;
unsigned short var_16 = (unsigned short)19637;
long long int var_17 = 2219423875249313600LL;
signed char var_18 = (signed char)67;
void init() {
}

void checksum() {
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
