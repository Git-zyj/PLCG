#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2963217762748508533ULL;
unsigned int var_6 = 2034948038U;
short var_9 = (short)-31377;
int var_14 = 1300013889;
unsigned short var_15 = (unsigned short)14634;
unsigned short var_16 = (unsigned short)26678;
short var_17 = (short)-14014;
int zero = 0;
unsigned short var_19 = (unsigned short)3833;
_Bool var_20 = (_Bool)0;
short var_21 = (short)6035;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
