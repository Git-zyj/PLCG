#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13297;
short var_1 = (short)16789;
unsigned char var_4 = (unsigned char)2;
unsigned long long int var_7 = 17792489770991392078ULL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)18174;
short var_11 = (short)-6989;
unsigned int var_12 = 2439958080U;
int var_14 = 1816140966;
int zero = 0;
signed char var_16 = (signed char)123;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-13769;
unsigned int var_19 = 2685906744U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
