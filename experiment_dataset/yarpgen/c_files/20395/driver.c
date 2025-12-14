#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -1359187960;
signed char var_3 = (signed char)113;
signed char var_5 = (signed char)-13;
long long int var_8 = -1999319303878872429LL;
signed char var_9 = (signed char)-118;
int zero = 0;
signed char var_11 = (signed char)-67;
unsigned short var_12 = (unsigned short)55979;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
