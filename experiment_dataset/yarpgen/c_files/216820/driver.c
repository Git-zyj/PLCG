#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-29020;
unsigned long long int var_8 = 17225995818687560905ULL;
short var_10 = (short)-29940;
int zero = 0;
int var_11 = -2059726377;
signed char var_12 = (signed char)-58;
signed char var_13 = (signed char)30;
unsigned int var_14 = 1447128520U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
