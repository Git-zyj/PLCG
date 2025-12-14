#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
unsigned short var_3 = (unsigned short)14726;
signed char var_11 = (signed char)-68;
unsigned long long int var_12 = 10901850448052317249ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -5018859480233257600LL;
void init() {
}

void checksum() {
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
