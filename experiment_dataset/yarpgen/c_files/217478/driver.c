#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)86;
unsigned int var_3 = 614339383U;
unsigned int var_5 = 4230551456U;
unsigned int var_6 = 2952623371U;
unsigned int var_10 = 4200725278U;
int zero = 0;
unsigned long long int var_11 = 17833312027153065711ULL;
unsigned long long int var_12 = 18327035538805305035ULL;
signed char var_13 = (signed char)120;
int var_14 = 1221319414;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
