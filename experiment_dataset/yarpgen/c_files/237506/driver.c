#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)96;
unsigned short var_3 = (unsigned short)43344;
unsigned char var_4 = (unsigned char)187;
unsigned char var_7 = (unsigned char)109;
int var_8 = -1439736287;
long long int var_13 = -4188241080488609482LL;
int zero = 0;
short var_14 = (short)-19645;
unsigned long long int var_15 = 1367339098051073357ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
