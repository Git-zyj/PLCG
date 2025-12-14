#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
short var_15 = (short)23303;
int zero = 0;
unsigned short var_20 = (unsigned short)25519;
long long int var_21 = -5686526261986557977LL;
long long int var_22 = 6676894761897614886LL;
unsigned short var_23 = (unsigned short)53403;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
