#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
int var_2 = 656454264;
signed char var_3 = (signed char)111;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned int var_12 = 771497648U;
int zero = 0;
long long int var_13 = -7783656219365147336LL;
_Bool var_14 = (_Bool)0;
int var_15 = -1591636912;
void init() {
}

void checksum() {
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
