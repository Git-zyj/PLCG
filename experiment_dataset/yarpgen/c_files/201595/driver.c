#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2732226523U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)3;
short var_12 = (short)10022;
signed char var_13 = (signed char)96;
int zero = 0;
unsigned int var_15 = 580849699U;
unsigned int var_16 = 2714907200U;
long long int var_17 = 334378573730114464LL;
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
