#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 128681017U;
long long int var_1 = 2941895312469735013LL;
unsigned short var_3 = (unsigned short)5478;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -262017922;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
