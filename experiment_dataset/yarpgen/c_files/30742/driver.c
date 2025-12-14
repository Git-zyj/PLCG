#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)141;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3895006550U;
short var_10 = (short)952;
unsigned char var_12 = (unsigned char)171;
short var_15 = (short)9320;
unsigned char var_17 = (unsigned char)44;
int zero = 0;
short var_18 = (short)16916;
unsigned char var_19 = (unsigned char)240;
short var_20 = (short)14042;
short var_21 = (short)-31211;
void init() {
}

void checksum() {
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
