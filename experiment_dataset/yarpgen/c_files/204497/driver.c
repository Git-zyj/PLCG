#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -8036402360690111502LL;
long long int var_3 = -2384098391115664778LL;
long long int var_4 = 1677594131856546834LL;
long long int var_6 = 1555196559414890178LL;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2040469716623708282LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 4945084812397796208LL;
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
