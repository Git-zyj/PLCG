#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1727183015U;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)59020;
long long int var_13 = 1802711263824688347LL;
long long int var_14 = -6016130329979827243LL;
int zero = 0;
short var_15 = (short)-24971;
unsigned long long int var_16 = 5173642532176349628ULL;
signed char var_17 = (signed char)68;
int var_18 = -1105933722;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
