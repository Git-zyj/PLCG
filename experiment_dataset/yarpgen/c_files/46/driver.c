#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)122;
long long int var_3 = -3422432524723049378LL;
short var_5 = (short)6327;
long long int var_6 = 7920365551893154096LL;
int var_8 = -929344093;
int zero = 0;
unsigned long long int var_10 = 1064627802726381188ULL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
