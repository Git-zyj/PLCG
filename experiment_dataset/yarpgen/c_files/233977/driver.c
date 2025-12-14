#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 7915823925176202279ULL;
unsigned long long int var_3 = 369795376036579462ULL;
signed char var_4 = (signed char)-100;
unsigned int var_6 = 863238834U;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 787245570U;
long long int var_11 = -5919604084630414888LL;
unsigned long long int var_12 = 13218202954908610711ULL;
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
