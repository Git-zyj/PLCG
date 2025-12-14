#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)97;
unsigned int var_7 = 2697506912U;
unsigned short var_8 = (unsigned short)52140;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-2633;
signed char var_14 = (signed char)-34;
int zero = 0;
unsigned long long int var_16 = 17022684420337443382ULL;
unsigned char var_17 = (unsigned char)87;
unsigned int var_18 = 72836614U;
long long int var_19 = -2166468405660364861LL;
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
