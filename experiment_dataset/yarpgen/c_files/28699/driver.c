#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)-89;
unsigned short var_6 = (unsigned short)17817;
short var_15 = (short)-16058;
short var_16 = (short)28768;
short var_17 = (short)15549;
int zero = 0;
long long int var_19 = 3332991859847330069LL;
short var_20 = (short)1632;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)50010;
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
