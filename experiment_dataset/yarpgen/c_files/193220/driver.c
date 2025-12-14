#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 5695359848218226920LL;
unsigned long long int var_3 = 16946590948997170400ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_11 = 1527518895U;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-21896;
unsigned char var_14 = (unsigned char)26;
void init() {
}

void checksum() {
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
