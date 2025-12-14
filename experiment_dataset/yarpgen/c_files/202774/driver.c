#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28313;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)57;
int var_6 = -468777964;
unsigned short var_12 = (unsigned short)30166;
long long int var_16 = -3385539268124643653LL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)63518;
int zero = 0;
int var_19 = 2139525472;
unsigned short var_20 = (unsigned short)20730;
long long int var_21 = 4210138389943726661LL;
_Bool var_22 = (_Bool)0;
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
