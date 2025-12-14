#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)3739;
unsigned long long int var_4 = 4104950385797301360ULL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 16901764535425581395ULL;
unsigned char var_12 = (unsigned char)213;
unsigned char var_13 = (unsigned char)187;
unsigned long long int var_14 = 13226399014987351457ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
