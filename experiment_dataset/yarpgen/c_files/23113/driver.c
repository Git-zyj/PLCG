#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1524030833679550808LL;
_Bool var_8 = (_Bool)0;
int var_10 = -625660778;
_Bool var_14 = (_Bool)1;
signed char var_19 = (signed char)-107;
int zero = 0;
short var_20 = (short)10798;
short var_21 = (short)-8002;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
