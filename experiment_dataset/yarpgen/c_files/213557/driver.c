#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -882655035245643448LL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-32747;
unsigned long long int var_5 = 11401981307944680561ULL;
long long int var_6 = -6853088179330878198LL;
int var_8 = 1527727452;
long long int var_10 = -5010006533462978177LL;
int zero = 0;
short var_11 = (short)18954;
int var_12 = 623853638;
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
