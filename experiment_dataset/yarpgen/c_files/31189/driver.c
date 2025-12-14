#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20862;
unsigned int var_1 = 2461791992U;
unsigned int var_7 = 1777508026U;
_Bool var_10 = (_Bool)0;
signed char var_14 = (signed char)-62;
unsigned char var_15 = (unsigned char)134;
unsigned int var_16 = 1927944314U;
unsigned int var_17 = 248153024U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)56948;
unsigned int var_21 = 1740314266U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
