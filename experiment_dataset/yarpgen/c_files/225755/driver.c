#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)11;
unsigned char var_9 = (unsigned char)107;
unsigned int var_10 = 3616565566U;
unsigned short var_11 = (unsigned short)15337;
int zero = 0;
unsigned int var_12 = 1398728379U;
signed char var_13 = (signed char)92;
unsigned int var_14 = 880871638U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
