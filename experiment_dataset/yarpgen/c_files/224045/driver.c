#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned long long int var_10 = 12953845637442761806ULL;
unsigned short var_14 = (unsigned short)35522;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 3552213074678040594LL;
short var_22 = (short)-2425;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
