#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3363;
int var_1 = -1516796338;
unsigned char var_2 = (unsigned char)24;
unsigned char var_3 = (unsigned char)72;
unsigned char var_10 = (unsigned char)87;
unsigned char var_11 = (unsigned char)206;
signed char var_17 = (signed char)51;
int zero = 0;
unsigned int var_20 = 807592589U;
int var_21 = 912273337;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3268872713U;
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
