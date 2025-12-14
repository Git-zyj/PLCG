#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 1222511809;
_Bool var_15 = (_Bool)1;
int var_17 = -171988484;
int zero = 0;
long long int var_18 = -8445879054317504097LL;
long long int var_19 = 2471835258525745940LL;
short var_20 = (short)12127;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
