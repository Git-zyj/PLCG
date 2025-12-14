#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
unsigned char var_1 = (unsigned char)189;
short var_3 = (short)15042;
unsigned long long int var_4 = 14604259610597572182ULL;
unsigned char var_5 = (unsigned char)163;
long long int var_6 = -5462056531445231162LL;
unsigned int var_7 = 429150958U;
unsigned long long int var_8 = 6432573139413119715ULL;
unsigned long long int var_9 = 5620160613848008894ULL;
unsigned long long int var_10 = 16420785532981867601ULL;
short var_11 = (short)10626;
unsigned int var_12 = 2497172942U;
short var_13 = (short)13323;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-20476;
unsigned char var_16 = (unsigned char)12;
short var_17 = (short)19169;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
