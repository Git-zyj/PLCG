#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-19665;
unsigned char var_15 = (unsigned char)227;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)338;
int zero = 0;
unsigned char var_20 = (unsigned char)82;
int var_21 = -264125108;
long long int var_22 = -4974442941864638507LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
