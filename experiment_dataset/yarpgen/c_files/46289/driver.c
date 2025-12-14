#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_4 = (short)31136;
long long int var_5 = 2596133601690931410LL;
long long int var_6 = -1227833446023882448LL;
int var_10 = -1602919977;
int zero = 0;
signed char var_12 = (signed char)-67;
unsigned short var_13 = (unsigned short)12157;
_Bool var_14 = (_Bool)0;
int var_15 = -1634334888;
signed char var_16 = (signed char)74;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
