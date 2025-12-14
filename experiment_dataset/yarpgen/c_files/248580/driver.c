#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-16979;
long long int var_9 = -7367516711199640402LL;
unsigned char var_16 = (unsigned char)9;
int zero = 0;
unsigned long long int var_18 = 15768572440343923039ULL;
unsigned long long int var_19 = 5564469513351262311ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
