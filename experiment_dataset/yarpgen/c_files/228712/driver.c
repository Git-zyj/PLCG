#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16329;
long long int var_5 = 8376290709296771728LL;
signed char var_6 = (signed char)45;
_Bool var_8 = (_Bool)0;
short var_9 = (short)6859;
int var_13 = -1402840500;
int zero = 0;
short var_18 = (short)7026;
unsigned long long int var_19 = 11227824738719568391ULL;
unsigned long long int var_20 = 11899349085469158869ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
