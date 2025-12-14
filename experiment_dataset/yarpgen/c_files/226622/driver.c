#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -734792454480036700LL;
short var_6 = (short)-20776;
_Bool var_8 = (_Bool)1;
long long int var_11 = -5594878012414125303LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-4;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
