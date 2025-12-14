#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_4 = (unsigned short)2256;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)63;
unsigned char var_12 = (unsigned char)80;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1180131454;
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
