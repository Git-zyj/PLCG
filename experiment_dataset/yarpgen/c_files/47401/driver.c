#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3814334932474538431LL;
short var_1 = (short)-24349;
short var_3 = (short)22023;
unsigned short var_4 = (unsigned short)38440;
unsigned int var_8 = 4131107970U;
unsigned long long int var_12 = 17421757687927736900ULL;
unsigned char var_18 = (unsigned char)88;
int zero = 0;
int var_19 = 172908983;
unsigned short var_20 = (unsigned short)47445;
unsigned short var_21 = (unsigned short)33119;
short var_22 = (short)23743;
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
