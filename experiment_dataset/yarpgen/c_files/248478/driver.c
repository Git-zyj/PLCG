#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 806661630;
unsigned int var_2 = 1437928962U;
short var_6 = (short)28111;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1500133509U;
long long int var_11 = -7404711265318085601LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -3409540567419984531LL;
int var_15 = 1832671188;
void init() {
}

void checksum() {
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
