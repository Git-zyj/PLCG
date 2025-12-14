#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1189281037;
_Bool var_7 = (_Bool)0;
unsigned long long int var_13 = 11188294779308572906ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 4140711643U;
long long int var_22 = -5452240670439403737LL;
unsigned long long int var_23 = 7551562923319629307ULL;
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
