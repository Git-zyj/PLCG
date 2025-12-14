#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 54190638;
long long int var_1 = -5508789018603999541LL;
unsigned short var_3 = (unsigned short)2579;
long long int var_4 = 780240925605968968LL;
short var_6 = (short)-13945;
signed char var_9 = (signed char)102;
int zero = 0;
int var_10 = -2092238696;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
