#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1778053494U;
int var_2 = 410441819;
unsigned short var_6 = (unsigned short)8494;
unsigned char var_10 = (unsigned char)174;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 1217159616U;
int zero = 0;
short var_17 = (short)-15499;
unsigned char var_18 = (unsigned char)95;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-3264;
short var_21 = (short)9103;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
