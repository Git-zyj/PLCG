#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)670;
short var_5 = (short)5002;
unsigned int var_7 = 2984050329U;
long long int var_12 = -5223256720674698323LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 11897456115253146143ULL;
long long int var_20 = 6472011932314066995LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
