#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15932965895231437647ULL;
int var_5 = -850053648;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)10566;
_Bool var_19 = (_Bool)0;
short var_20 = (short)11608;
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
