#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19335;
long long int var_2 = 8130631455636413589LL;
long long int var_4 = -5720761678803544118LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = 4567130180680145070LL;
short var_20 = (short)7503;
void init() {
}

void checksum() {
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
