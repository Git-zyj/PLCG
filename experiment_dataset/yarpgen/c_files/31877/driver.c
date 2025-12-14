#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2389111803U;
unsigned char var_3 = (unsigned char)60;
signed char var_4 = (signed char)10;
unsigned long long int var_5 = 11085592316468126490ULL;
unsigned short var_8 = (unsigned short)14080;
signed char var_13 = (signed char)-31;
signed char var_14 = (signed char)-52;
int zero = 0;
signed char var_15 = (signed char)0;
signed char var_16 = (signed char)0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
