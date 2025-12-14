#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 1844998369532351213ULL;
short var_5 = (short)22778;
unsigned short var_7 = (unsigned short)47093;
short var_8 = (short)-17515;
short var_9 = (short)1617;
short var_10 = (short)12881;
unsigned short var_13 = (unsigned short)49374;
int zero = 0;
unsigned short var_14 = (unsigned short)44888;
short var_15 = (short)-20924;
unsigned char var_16 = (unsigned char)17;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
