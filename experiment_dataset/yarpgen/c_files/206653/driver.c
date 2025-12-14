#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16313;
signed char var_1 = (signed char)33;
unsigned long long int var_2 = 4281777009395798210ULL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-22582;
int zero = 0;
unsigned long long int var_13 = 3709412189661995340ULL;
short var_14 = (short)-9001;
signed char var_15 = (signed char)-123;
unsigned short var_16 = (unsigned short)56200;
void init() {
}

void checksum() {
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
