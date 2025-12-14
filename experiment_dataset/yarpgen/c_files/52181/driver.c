#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1066265013157141497LL;
signed char var_5 = (signed char)121;
unsigned int var_6 = 354327678U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 12718944284793777987ULL;
unsigned short var_11 = (unsigned short)38198;
unsigned short var_12 = (unsigned short)60022;
int zero = 0;
unsigned int var_14 = 94097982U;
long long int var_15 = -624677431371663139LL;
unsigned short var_16 = (unsigned short)13349;
short var_17 = (short)-32740;
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
