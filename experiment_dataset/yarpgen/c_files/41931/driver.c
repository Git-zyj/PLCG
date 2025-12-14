#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1772467518;
unsigned short var_7 = (unsigned short)55592;
unsigned int var_9 = 511145331U;
long long int var_12 = -9081421197986522990LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-59;
unsigned long long int var_20 = 15436593886572273504ULL;
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
