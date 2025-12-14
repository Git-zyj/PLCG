#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8665183851348900083ULL;
short var_3 = (short)2648;
int var_6 = -459106001;
unsigned int var_7 = 1162237385U;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)36;
unsigned int var_16 = 4226533590U;
int zero = 0;
int var_17 = 1478374243;
unsigned short var_18 = (unsigned short)61642;
unsigned short var_19 = (unsigned short)24687;
signed char var_20 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
