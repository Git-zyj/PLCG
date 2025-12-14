#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -358410276;
long long int var_5 = -1583581760968654735LL;
unsigned int var_6 = 2489017964U;
unsigned int var_8 = 2907154885U;
unsigned short var_10 = (unsigned short)12820;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 17421186357183402289ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
