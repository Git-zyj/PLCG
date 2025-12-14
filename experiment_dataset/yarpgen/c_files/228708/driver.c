#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1030312097;
unsigned char var_8 = (unsigned char)238;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)36027;
unsigned short var_16 = (unsigned short)32171;
int zero = 0;
unsigned char var_17 = (unsigned char)135;
long long int var_18 = 2245195378105243269LL;
unsigned short var_19 = (unsigned short)36101;
void init() {
}

void checksum() {
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
