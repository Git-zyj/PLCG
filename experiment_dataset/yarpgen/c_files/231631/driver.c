#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)6853;
unsigned int var_7 = 3170606156U;
long long int var_8 = 303388274531916488LL;
unsigned short var_10 = (unsigned short)10093;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-58;
unsigned int var_13 = 198112030U;
unsigned short var_14 = (unsigned short)13115;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
