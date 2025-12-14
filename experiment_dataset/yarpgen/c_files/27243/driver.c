#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55056;
int var_1 = -1267942866;
int var_4 = -1119043358;
int var_8 = -1260554472;
unsigned short var_11 = (unsigned short)52843;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 1370477423U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7674317563494542489ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
