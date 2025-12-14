#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_5 = (short)-9191;
short var_17 = (short)17595;
int zero = 0;
unsigned short var_20 = (unsigned short)48703;
short var_21 = (short)-19516;
unsigned long long int var_22 = 16501942259126463145ULL;
int var_23 = 1547779709;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
