#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49054;
short var_1 = (short)30818;
short var_2 = (short)-5445;
unsigned short var_5 = (unsigned short)22985;
unsigned short var_6 = (unsigned short)50658;
unsigned int var_7 = 3505551178U;
_Bool var_9 = (_Bool)0;
short var_11 = (short)17796;
int var_13 = 2142051785;
short var_15 = (short)17514;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)4694;
int var_19 = 103294970;
void init() {
}

void checksum() {
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
