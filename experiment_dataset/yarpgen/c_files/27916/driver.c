#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 2835596971U;
signed char var_6 = (signed char)-96;
unsigned char var_7 = (unsigned char)166;
int zero = 0;
unsigned char var_11 = (unsigned char)121;
signed char var_12 = (signed char)96;
long long int var_13 = 1907510148141644541LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
