#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -119829536;
unsigned short var_14 = (unsigned short)40642;
short var_17 = (short)19392;
short var_18 = (short)-15283;
int zero = 0;
short var_19 = (short)27592;
unsigned char var_20 = (unsigned char)245;
unsigned int var_21 = 2541706870U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
