#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)98;
short var_3 = (short)3253;
unsigned char var_5 = (unsigned char)163;
unsigned char var_7 = (unsigned char)144;
int zero = 0;
unsigned short var_14 = (unsigned short)9654;
short var_15 = (short)21133;
signed char var_16 = (signed char)3;
long long int var_17 = -8268890823280618295LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
