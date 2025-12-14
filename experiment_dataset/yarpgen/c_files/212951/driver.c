#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 3341147059984374157LL;
signed char var_11 = (signed char)59;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)61419;
int zero = 0;
unsigned int var_20 = 3852922022U;
long long int var_21 = 9009990490000061807LL;
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
