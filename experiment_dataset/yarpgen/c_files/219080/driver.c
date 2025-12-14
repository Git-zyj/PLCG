#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)195;
unsigned long long int var_8 = 7832569237497808385ULL;
unsigned short var_14 = (unsigned short)12315;
unsigned int var_17 = 2452179621U;
int var_18 = 1372233442;
int zero = 0;
unsigned short var_20 = (unsigned short)282;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
