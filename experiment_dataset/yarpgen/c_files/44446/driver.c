#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -376006716;
unsigned long long int var_1 = 14543947155229401536ULL;
int var_3 = 2019478510;
int var_8 = 1177725426;
int var_9 = -1385783420;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 9146879241607477418ULL;
int var_16 = -1496606377;
int var_17 = -1033165606;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
