#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59934;
_Bool var_1 = (_Bool)0;
long long int var_2 = -4974479507777371252LL;
long long int var_4 = -5457616354014207237LL;
unsigned short var_9 = (unsigned short)29482;
unsigned short var_10 = (unsigned short)57346;
int zero = 0;
unsigned short var_15 = (unsigned short)14750;
unsigned short var_16 = (unsigned short)24730;
unsigned short var_17 = (unsigned short)8466;
void init() {
}

void checksum() {
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
