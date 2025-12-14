#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
short var_2 = (short)-18746;
unsigned int var_5 = 3828777552U;
_Bool var_10 = (_Bool)0;
short var_14 = (short)-25693;
unsigned long long int var_15 = 8022126588496334121ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_19 = (short)-8876;
_Bool var_20 = (_Bool)1;
short var_21 = (short)25621;
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
