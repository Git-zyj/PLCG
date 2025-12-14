#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1135;
unsigned short var_2 = (unsigned short)55899;
short var_3 = (short)2194;
unsigned short var_5 = (unsigned short)4181;
unsigned int var_8 = 1279389839U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)14083;
short var_14 = (short)-24890;
long long int var_15 = 4426099434402598403LL;
unsigned long long int var_16 = 17352461254614452166ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
