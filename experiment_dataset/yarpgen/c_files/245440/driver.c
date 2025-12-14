#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9199114731244755918LL;
unsigned int var_1 = 1575636999U;
unsigned long long int var_4 = 6303223016958718248ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)17538;
short var_9 = (short)-25071;
unsigned int var_11 = 601962223U;
int zero = 0;
int var_12 = 43031220;
unsigned short var_13 = (unsigned short)45480;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
