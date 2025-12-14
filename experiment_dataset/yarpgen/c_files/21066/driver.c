#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6003639288626212995LL;
signed char var_10 = (signed char)71;
signed char var_11 = (signed char)66;
long long int var_16 = 3633842745123035128LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3141836763U;
short var_19 = (short)16132;
unsigned int var_20 = 2653046436U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
