#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2380953178648171629ULL;
unsigned int var_2 = 1683854650U;
short var_3 = (short)1506;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)49043;
unsigned int var_7 = 997131330U;
unsigned short var_13 = (unsigned short)55213;
unsigned short var_14 = (unsigned short)18236;
unsigned char var_16 = (unsigned char)216;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)46225;
int zero = 0;
unsigned short var_19 = (unsigned short)4512;
unsigned long long int var_20 = 17619842689705722345ULL;
unsigned int var_21 = 1311749589U;
int var_22 = -1649542356;
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
