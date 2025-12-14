#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 10940263855227886384ULL;
unsigned short var_5 = (unsigned short)11231;
int var_10 = -706982031;
long long int var_14 = -5130543040574667973LL;
int zero = 0;
long long int var_15 = 6283852187761714175LL;
long long int var_16 = 3849772066997673988LL;
signed char var_17 = (signed char)-20;
long long int var_18 = -5327191161077762174LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
