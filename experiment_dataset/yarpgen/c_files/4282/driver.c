#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)5627;
long long int var_5 = -6922868271588475377LL;
short var_6 = (short)-20423;
int var_9 = 1753437511;
int var_10 = 59961482;
int zero = 0;
int var_13 = 1908852014;
long long int var_14 = -545672167818849560LL;
void init() {
}

void checksum() {
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
