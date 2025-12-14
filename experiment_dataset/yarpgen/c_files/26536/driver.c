#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1183564728;
signed char var_2 = (signed char)82;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)218;
unsigned char var_13 = (unsigned char)246;
unsigned long long int var_16 = 4673751133022982030ULL;
int zero = 0;
long long int var_19 = -5252279905008659321LL;
signed char var_20 = (signed char)111;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
