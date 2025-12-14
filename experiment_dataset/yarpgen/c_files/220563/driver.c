#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_11 = (unsigned char)27;
long long int var_18 = -8215178219070302215LL;
int zero = 0;
int var_19 = -2051436454;
unsigned short var_20 = (unsigned short)52242;
int var_21 = 2070246083;
unsigned char var_22 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
