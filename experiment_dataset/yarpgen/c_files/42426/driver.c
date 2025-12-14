#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14117;
unsigned long long int var_2 = 3847625696453084164ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)909;
unsigned short var_6 = (unsigned short)1363;
unsigned char var_7 = (unsigned char)173;
_Bool var_8 = (_Bool)1;
int var_10 = -649051378;
int zero = 0;
short var_14 = (short)27553;
short var_15 = (short)10976;
short var_16 = (short)6778;
int var_17 = 181781294;
void init() {
}

void checksum() {
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
