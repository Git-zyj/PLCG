#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 5876522875544011758ULL;
short var_4 = (short)27756;
unsigned long long int var_6 = 3279607267425277241ULL;
short var_9 = (short)10480;
int zero = 0;
long long int var_11 = -5893876406855953495LL;
signed char var_12 = (signed char)8;
signed char var_13 = (signed char)42;
signed char var_14 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
