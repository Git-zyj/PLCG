#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30323;
unsigned long long int var_2 = 15043497576925140627ULL;
unsigned int var_5 = 4017381088U;
long long int var_9 = 1011286732743801168LL;
unsigned short var_10 = (unsigned short)21927;
int var_13 = -2066256906;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)176;
unsigned int var_18 = 2268107760U;
void init() {
}

void checksum() {
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
