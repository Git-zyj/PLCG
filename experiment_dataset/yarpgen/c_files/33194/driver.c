#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -482742129011881297LL;
int var_5 = 511430919;
unsigned int var_6 = 883097716U;
unsigned int var_7 = 4000932794U;
unsigned short var_10 = (unsigned short)13041;
int zero = 0;
unsigned int var_20 = 3885129163U;
int var_21 = 1018956187;
short var_22 = (short)8982;
unsigned int var_23 = 1694952045U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
