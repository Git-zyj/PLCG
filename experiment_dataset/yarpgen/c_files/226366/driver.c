#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-20;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5780858786630494585ULL;
int var_14 = -1357244350;
int zero = 0;
unsigned short var_15 = (unsigned short)50717;
unsigned long long int var_16 = 17850739898370087869ULL;
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
