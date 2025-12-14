#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)91;
_Bool var_5 = (_Bool)1;
short var_6 = (short)21742;
unsigned int var_7 = 3447781217U;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5519999264425051124LL;
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
