#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = -3721201419045184322LL;
unsigned short var_6 = (unsigned short)56720;
_Bool var_8 = (_Bool)0;
long long int var_12 = -6901388296878990804LL;
long long int var_14 = -1040428298652091985LL;
long long int var_19 = -9197594869773443650LL;
int zero = 0;
int var_20 = 322871726;
unsigned char var_21 = (unsigned char)251;
int var_22 = 336013696;
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
