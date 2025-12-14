#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 2618982020212683018ULL;
signed char var_10 = (signed char)116;
unsigned short var_12 = (unsigned short)42905;
int var_13 = 839416854;
int var_17 = -1387431986;
int zero = 0;
int var_18 = -1291873668;
unsigned int var_19 = 135385213U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
