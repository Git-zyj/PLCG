#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)200;
int var_9 = -1355602278;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 1390852876571415457LL;
int var_16 = -1982461318;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
