#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 147679840;
unsigned short var_6 = (unsigned short)17295;
int var_11 = 1536724806;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int var_15 = 1864999696;
unsigned short var_16 = (unsigned short)33654;
int zero = 0;
long long int var_17 = -4340690066392995103LL;
int var_18 = -253428507;
unsigned long long int var_19 = 14674602820994095409ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
