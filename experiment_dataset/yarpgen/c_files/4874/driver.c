#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)86;
signed char var_7 = (signed char)124;
unsigned short var_8 = (unsigned short)42731;
unsigned char var_11 = (unsigned char)117;
unsigned int var_14 = 1056317421U;
int zero = 0;
unsigned short var_15 = (unsigned short)18595;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)99;
unsigned int var_18 = 2081666804U;
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
