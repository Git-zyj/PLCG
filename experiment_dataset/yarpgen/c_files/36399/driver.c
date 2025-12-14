#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46945;
unsigned short var_1 = (unsigned short)7459;
long long int var_3 = 226730173477323516LL;
int var_6 = -1559906236;
long long int var_7 = -8290969778544111022LL;
short var_11 = (short)-2613;
unsigned long long int var_12 = 6701827206872765345ULL;
unsigned char var_13 = (unsigned char)220;
signed char var_14 = (signed char)-124;
short var_16 = (short)16328;
_Bool var_17 = (_Bool)1;
long long int var_18 = 3558787236064629505LL;
unsigned int var_19 = 3809285157U;
int zero = 0;
short var_20 = (short)11214;
unsigned int var_21 = 2611235784U;
int var_22 = -516505991;
unsigned char var_23 = (unsigned char)138;
signed char var_24 = (signed char)23;
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
