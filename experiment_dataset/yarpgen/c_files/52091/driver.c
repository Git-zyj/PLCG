#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_5 = (short)2585;
_Bool var_6 = (_Bool)1;
int var_8 = 547406574;
long long int var_9 = 5810705737747444703LL;
short var_12 = (short)-8249;
int zero = 0;
signed char var_14 = (signed char)18;
short var_15 = (short)-10462;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
