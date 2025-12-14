#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8784515208154235447LL;
long long int var_5 = -4691554453029551178LL;
short var_6 = (short)-12476;
long long int var_8 = 3177307936181590993LL;
int zero = 0;
unsigned short var_10 = (unsigned short)44418;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3570667918U;
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
