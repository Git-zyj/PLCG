#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)25;
_Bool var_3 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_16 = 5933651848527416674LL;
unsigned int var_17 = 1718517783U;
signed char var_18 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
