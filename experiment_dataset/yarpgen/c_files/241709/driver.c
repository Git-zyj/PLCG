#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2713844958669813170LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)61553;
_Bool var_7 = (_Bool)1;
long long int var_9 = 9151827561755910392LL;
short var_13 = (short)-16842;
int zero = 0;
signed char var_15 = (signed char)-54;
unsigned short var_16 = (unsigned short)18904;
unsigned short var_17 = (unsigned short)47725;
unsigned int var_18 = 2108696569U;
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
