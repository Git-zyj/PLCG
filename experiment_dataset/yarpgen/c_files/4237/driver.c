#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1129768293;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-23424;
short var_4 = (short)22085;
short var_5 = (short)-6187;
short var_6 = (short)-6141;
int zero = 0;
short var_12 = (short)-26340;
int var_13 = 1699965929;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
