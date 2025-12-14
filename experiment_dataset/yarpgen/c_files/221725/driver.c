#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 547165168U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 14508853260980960455ULL;
int zero = 0;
unsigned int var_10 = 2122045098U;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-6519;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
