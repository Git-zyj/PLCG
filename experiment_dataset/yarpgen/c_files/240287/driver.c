#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3989804976443665433LL;
short var_1 = (short)9926;
unsigned int var_3 = 3080162537U;
long long int var_5 = -8658482201963359191LL;
unsigned long long int var_12 = 2103613273448539932ULL;
short var_14 = (short)-10768;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2392054401U;
signed char var_17 = (signed char)-61;
signed char var_18 = (signed char)-119;
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
