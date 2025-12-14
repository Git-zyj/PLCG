#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1243326388832459800LL;
unsigned int var_5 = 410468708U;
long long int var_6 = 6318111910473341464LL;
unsigned int var_8 = 1623666273U;
unsigned int var_9 = 2527235116U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 665197641U;
_Bool var_13 = (_Bool)0;
short var_17 = (short)-3923;
int zero = 0;
int var_19 = -1411384350;
unsigned short var_20 = (unsigned short)19680;
void init() {
}

void checksum() {
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
