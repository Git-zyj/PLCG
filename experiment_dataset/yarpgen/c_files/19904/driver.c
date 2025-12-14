#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6424569500439681408LL;
short var_4 = (short)-8573;
unsigned long long int var_5 = 4868550952633497122ULL;
unsigned long long int var_6 = 4184704468285431824ULL;
unsigned int var_7 = 2413471018U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)7153;
int zero = 0;
unsigned short var_16 = (unsigned short)51469;
unsigned long long int var_17 = 5968538397527482621ULL;
void init() {
}

void checksum() {
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
