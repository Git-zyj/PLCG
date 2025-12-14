#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30297;
int var_3 = 1191318073;
_Bool var_11 = (_Bool)0;
int var_15 = 309592107;
int zero = 0;
int var_17 = -112630399;
_Bool var_18 = (_Bool)0;
int var_19 = 1823451324;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
