#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)17593;
unsigned int var_3 = 3060199289U;
signed char var_4 = (signed char)-28;
long long int var_6 = 4805902410108724530LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 7394073267541334792ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)10831;
unsigned int var_15 = 358983015U;
int zero = 0;
long long int var_16 = -5180837103988809686LL;
unsigned int var_17 = 1870159917U;
short var_18 = (short)-11014;
signed char var_19 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
