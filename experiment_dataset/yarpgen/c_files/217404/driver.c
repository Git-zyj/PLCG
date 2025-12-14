#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -119629400;
short var_2 = (short)-16869;
long long int var_7 = 4782613722365209323LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 5738420583635904530LL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)10185;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
