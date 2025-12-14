#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1357528462;
int var_3 = 378060887;
short var_6 = (short)17483;
unsigned int var_7 = 1494223515U;
unsigned long long int var_11 = 11618580717202448370ULL;
int zero = 0;
unsigned long long int var_12 = 16267004635386338879ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 14351780953702662717ULL;
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
