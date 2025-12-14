#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7645057254332865655LL;
int var_1 = 1843143089;
unsigned int var_3 = 2285560540U;
unsigned short var_6 = (unsigned short)40222;
int var_9 = -1144276323;
short var_10 = (short)-28437;
unsigned char var_11 = (unsigned char)145;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)68;
long long int var_15 = 545208570095620885LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
