#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)36;
short var_2 = (short)12523;
signed char var_3 = (signed char)96;
int var_5 = 745332399;
unsigned int var_7 = 2933208941U;
long long int var_10 = 8219066815594521443LL;
unsigned short var_11 = (unsigned short)33211;
signed char var_12 = (signed char)-42;
int zero = 0;
unsigned char var_13 = (unsigned char)164;
signed char var_14 = (signed char)27;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int var_17 = -322623195;
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
