#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8850960210245329613LL;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)5022;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)59605;
unsigned char var_17 = (unsigned char)51;
long long int var_18 = -2295195924581219625LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
