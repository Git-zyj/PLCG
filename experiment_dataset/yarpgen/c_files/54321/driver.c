#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
signed char var_1 = (signed char)100;
int var_2 = -539263093;
int var_4 = 341592789;
_Bool var_6 = (_Bool)1;
long long int var_10 = 8850881331910075937LL;
int zero = 0;
int var_12 = 824437998;
long long int var_13 = 5016341731803070198LL;
short var_14 = (short)24568;
void init() {
}

void checksum() {
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
