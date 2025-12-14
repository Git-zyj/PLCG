#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 13893201;
short var_5 = (short)6981;
short var_7 = (short)3944;
int var_8 = -1903352094;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 8933442242284409009LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 15597225030212328505ULL;
short var_14 = (short)-9884;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
