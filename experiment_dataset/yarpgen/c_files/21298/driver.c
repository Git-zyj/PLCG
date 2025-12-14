#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28316;
long long int var_1 = 4078121395948497743LL;
unsigned int var_2 = 548350267U;
unsigned int var_4 = 1517665534U;
long long int var_6 = 2741545659917674630LL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)236;
unsigned short var_9 = (unsigned short)12757;
int var_11 = -2116077521;
unsigned short var_12 = (unsigned short)50921;
short var_13 = (short)-31535;
unsigned int var_14 = 3856300511U;
signed char var_15 = (signed char)-81;
unsigned char var_16 = (unsigned char)58;
int zero = 0;
short var_17 = (short)6467;
unsigned int var_18 = 3861122441U;
int var_19 = 1430564927;
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
