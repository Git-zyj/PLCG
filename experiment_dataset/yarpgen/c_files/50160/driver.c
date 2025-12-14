#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)54;
long long int var_8 = -1603968067656113560LL;
unsigned char var_10 = (unsigned char)11;
int var_12 = -427705759;
unsigned long long int var_13 = 14559333058957686087ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -1854730371761921117LL;
long long int var_16 = -7438539490568476069LL;
short var_17 = (short)23097;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
