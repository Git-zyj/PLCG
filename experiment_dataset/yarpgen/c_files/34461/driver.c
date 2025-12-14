#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56285;
_Bool var_1 = (_Bool)1;
short var_6 = (short)13871;
short var_8 = (short)14303;
short var_9 = (short)-2329;
unsigned int var_10 = 3547172188U;
int var_11 = 571368045;
int zero = 0;
unsigned long long int var_20 = 9795263976629397075ULL;
short var_21 = (short)26232;
long long int var_22 = -1651180884523227351LL;
void init() {
}

void checksum() {
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
