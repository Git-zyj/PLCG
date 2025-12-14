#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56594;
short var_3 = (short)-18713;
signed char var_4 = (signed char)-1;
_Bool var_6 = (_Bool)1;
int var_8 = -1677231297;
int zero = 0;
short var_10 = (short)6943;
unsigned int var_11 = 404489605U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 1985224138753567158ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
