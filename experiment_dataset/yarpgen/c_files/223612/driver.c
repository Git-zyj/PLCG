#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -2015931748;
int var_8 = -80881978;
_Bool var_10 = (_Bool)1;
int var_13 = 719368332;
int zero = 0;
unsigned int var_17 = 3566587615U;
short var_18 = (short)11565;
void init() {
}

void checksum() {
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
