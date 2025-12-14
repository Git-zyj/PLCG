#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_7 = 5503007975111499020LL;
unsigned short var_8 = (unsigned short)49169;
unsigned short var_11 = (unsigned short)36218;
int zero = 0;
long long int var_18 = -5054864955534297280LL;
int var_19 = -824574682;
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
