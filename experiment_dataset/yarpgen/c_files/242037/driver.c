#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = -4957534978333528052LL;
unsigned long long int var_5 = 3422013234439315682ULL;
int var_6 = 541564149;
unsigned short var_7 = (unsigned short)11106;
unsigned short var_9 = (unsigned short)24977;
unsigned short var_10 = (unsigned short)37729;
int var_11 = 249047970;
short var_12 = (short)20393;
short var_13 = (short)-26953;
int zero = 0;
unsigned short var_14 = (unsigned short)27113;
int var_15 = 342826677;
unsigned short var_16 = (unsigned short)2213;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
