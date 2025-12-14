#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -2062248720;
long long int var_12 = -7919189646240900786LL;
signed char var_15 = (signed char)-107;
long long int var_16 = 8089254600191417240LL;
int zero = 0;
long long int var_20 = -4024266094407965538LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
