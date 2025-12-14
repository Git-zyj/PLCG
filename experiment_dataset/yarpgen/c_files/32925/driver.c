#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-5122;
_Bool var_7 = (_Bool)1;
long long int var_11 = -8157766433010136750LL;
unsigned int var_15 = 3336922768U;
int zero = 0;
short var_19 = (short)6617;
short var_20 = (short)12601;
unsigned int var_21 = 773741596U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
