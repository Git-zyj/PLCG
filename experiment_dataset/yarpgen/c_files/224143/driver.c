#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1678055331;
int var_3 = 1851919169;
int var_4 = 36360633;
short var_6 = (short)11903;
unsigned char var_16 = (unsigned char)77;
unsigned short var_17 = (unsigned short)14399;
unsigned long long int var_19 = 17532389998979275816ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)0;
long long int var_21 = -2300372366555260881LL;
long long int var_22 = 8879201986600751743LL;
short var_23 = (short)-8928;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
