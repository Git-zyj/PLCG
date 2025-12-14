#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)26556;
signed char var_5 = (signed char)-51;
unsigned char var_6 = (unsigned char)164;
unsigned int var_7 = 2763157047U;
signed char var_9 = (signed char)61;
signed char var_11 = (signed char)1;
int var_13 = 933220178;
long long int var_14 = -2891830833395418327LL;
signed char var_15 = (signed char)97;
unsigned short var_16 = (unsigned short)46278;
long long int var_17 = 8286333420510881951LL;
int zero = 0;
unsigned char var_20 = (unsigned char)240;
short var_21 = (short)-17266;
unsigned char var_22 = (unsigned char)186;
unsigned short var_23 = (unsigned short)37033;
unsigned short var_24 = (unsigned short)33916;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
