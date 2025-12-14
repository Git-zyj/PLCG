#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_7 = (unsigned char)206;
unsigned char var_8 = (unsigned char)211;
long long int var_16 = -1724240422990945368LL;
int zero = 0;
short var_17 = (short)15044;
unsigned short var_18 = (unsigned short)28679;
long long int var_19 = 4621779490150849011LL;
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
