#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1293049339781231161LL;
short var_3 = (short)5409;
signed char var_16 = (signed char)26;
short var_18 = (short)-10108;
int zero = 0;
signed char var_19 = (signed char)(-127 - 1);
unsigned long long int var_20 = 4479924836540989896ULL;
long long int var_21 = 6074845373870964260LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
