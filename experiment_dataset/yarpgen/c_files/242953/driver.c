#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6712;
unsigned short var_1 = (unsigned short)23119;
int var_2 = 1519147200;
unsigned int var_4 = 3891536275U;
unsigned short var_6 = (unsigned short)50098;
unsigned short var_8 = (unsigned short)54562;
short var_10 = (short)15848;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_16 = 80273753;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-31476;
unsigned short var_19 = (unsigned short)33066;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
