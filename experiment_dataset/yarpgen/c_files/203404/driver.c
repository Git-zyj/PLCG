#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-16837;
_Bool var_6 = (_Bool)1;
long long int var_7 = -859181119056578303LL;
unsigned int var_9 = 633901092U;
long long int var_12 = 3772890869864999838LL;
long long int var_13 = -9222920826695367014LL;
unsigned long long int var_14 = 11499514210535443033ULL;
int zero = 0;
signed char var_15 = (signed char)90;
long long int var_16 = 6567791837963438761LL;
void init() {
}

void checksum() {
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
