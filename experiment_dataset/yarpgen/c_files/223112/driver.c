#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)11956;
unsigned char var_4 = (unsigned char)83;
unsigned char var_8 = (unsigned char)244;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)96;
unsigned short var_11 = (unsigned short)13811;
int var_12 = -1242028835;
int zero = 0;
unsigned char var_14 = (unsigned char)53;
unsigned int var_15 = 2676318794U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
