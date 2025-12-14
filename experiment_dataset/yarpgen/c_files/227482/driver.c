#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2215918427045228207ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)96;
short var_12 = (short)6775;
int zero = 0;
unsigned char var_15 = (unsigned char)71;
long long int var_16 = 4805291883326680283LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
