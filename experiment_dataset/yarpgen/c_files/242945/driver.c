#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 130780697U;
signed char var_7 = (signed char)(-127 - 1);
short var_9 = (short)14672;
unsigned char var_10 = (unsigned char)35;
long long int var_11 = 5305484310275123811LL;
unsigned short var_16 = (unsigned short)24881;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2045992250U;
long long int var_21 = 1131091988351734681LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
