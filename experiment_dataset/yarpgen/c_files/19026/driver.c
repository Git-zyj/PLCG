#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_14 = (unsigned short)45652;
int zero = 0;
long long int var_20 = -8731587861248558515LL;
short var_21 = (short)-1606;
short var_22 = (short)-5567;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
