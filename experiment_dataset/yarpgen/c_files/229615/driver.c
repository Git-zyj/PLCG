#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 431670617;
long long int var_2 = -5344270723363840889LL;
int var_3 = 1019920689;
long long int var_4 = 8347090731688080795LL;
int var_6 = 101733901;
int var_8 = -429357610;
short var_11 = (short)24529;
short var_12 = (short)14556;
int zero = 0;
short var_13 = (short)17082;
int var_14 = 1844291379;
long long int var_15 = -3681102656867979171LL;
short var_16 = (short)13404;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
