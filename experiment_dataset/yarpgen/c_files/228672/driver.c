#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2060970611U;
_Bool var_1 = (_Bool)0;
short var_3 = (short)27074;
long long int var_5 = -6390167689647316304LL;
short var_7 = (short)25349;
int var_8 = -840098903;
signed char var_10 = (signed char)9;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_13 = -491442249;
unsigned long long int var_14 = 3942797514155516027ULL;
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
