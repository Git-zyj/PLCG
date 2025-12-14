#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
short var_9 = (short)19656;
signed char var_10 = (signed char)-74;
int zero = 0;
unsigned short var_13 = (unsigned short)51084;
short var_14 = (short)-17704;
_Bool var_15 = (_Bool)0;
long long int var_16 = 3245692679313071274LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
