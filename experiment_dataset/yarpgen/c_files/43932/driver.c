#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2134581056;
unsigned int var_2 = 967713952U;
unsigned long long int var_4 = 1547080965497400191ULL;
signed char var_5 = (signed char)-39;
unsigned char var_11 = (unsigned char)214;
_Bool var_12 = (_Bool)1;
int var_13 = 1840806320;
long long int var_15 = 4522446558477241063LL;
int var_16 = 49304771;
int zero = 0;
unsigned int var_18 = 1609508812U;
_Bool var_19 = (_Bool)1;
long long int var_20 = -2488750500993488319LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
