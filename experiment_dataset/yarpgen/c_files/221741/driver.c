#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31374;
int var_1 = -1620942174;
unsigned int var_3 = 594297651U;
signed char var_6 = (signed char)-8;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)62;
unsigned long long int var_13 = 11375778701654456498ULL;
long long int var_16 = 8713932812387987689LL;
int var_17 = 725055385;
int zero = 0;
unsigned char var_19 = (unsigned char)136;
unsigned char var_20 = (unsigned char)177;
int var_21 = -447482137;
unsigned short var_22 = (unsigned short)46780;
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
