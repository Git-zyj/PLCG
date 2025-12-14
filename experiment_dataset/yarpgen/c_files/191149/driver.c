#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)45535;
unsigned char var_8 = (unsigned char)98;
int var_11 = -1889130647;
int zero = 0;
unsigned char var_19 = (unsigned char)14;
short var_20 = (short)-17660;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1238514827U;
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
