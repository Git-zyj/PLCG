#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7871605649505607557ULL;
long long int var_5 = -8915964933387161216LL;
unsigned long long int var_6 = 5135839333467290191ULL;
int var_8 = 1566705593;
unsigned int var_9 = 3344136918U;
long long int var_10 = -7067204644424360842LL;
int zero = 0;
long long int var_11 = -6310452348177099951LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
