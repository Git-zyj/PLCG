#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned char var_13 = (unsigned char)82;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)229;
int zero = 0;
unsigned short var_17 = (unsigned short)11369;
unsigned char var_18 = (unsigned char)114;
void init() {
}

void checksum() {
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
