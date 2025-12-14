#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1897563758759949525LL;
unsigned int var_2 = 2212257782U;
unsigned short var_4 = (unsigned short)13865;
short var_5 = (short)-14559;
unsigned long long int var_6 = 17431884446300805425ULL;
short var_8 = (short)-8791;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 1239306088U;
_Bool var_11 = (_Bool)0;
short var_12 = (short)5493;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
