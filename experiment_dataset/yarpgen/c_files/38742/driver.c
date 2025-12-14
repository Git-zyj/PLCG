#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7604750289350363655LL;
long long int var_2 = -1317804026879869415LL;
signed char var_6 = (signed char)50;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
long long int var_22 = 1721787506467960786LL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
