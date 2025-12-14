#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26839;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-14759;
_Bool var_8 = (_Bool)1;
short var_18 = (short)-20843;
int zero = 0;
unsigned int var_20 = 900914375U;
unsigned int var_21 = 3436117880U;
long long int var_22 = -7586116946266393635LL;
unsigned int var_23 = 2771596957U;
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
