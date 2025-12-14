#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 245024327;
unsigned char var_1 = (unsigned char)31;
int var_3 = -121100735;
unsigned short var_4 = (unsigned short)7908;
_Bool var_6 = (_Bool)1;
short var_7 = (short)6881;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)1611;
short var_12 = (short)-25218;
signed char var_14 = (signed char)-13;
int zero = 0;
int var_16 = 1772648155;
unsigned char var_17 = (unsigned char)159;
short var_18 = (short)12034;
unsigned long long int var_19 = 11122508315182524623ULL;
int var_20 = -689431630;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
