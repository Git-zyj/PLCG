#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 158257361U;
long long int var_4 = 4840537958447646590LL;
short var_5 = (short)-14938;
short var_6 = (short)-5341;
short var_7 = (short)-7624;
unsigned char var_8 = (unsigned char)35;
unsigned short var_10 = (unsigned short)56777;
unsigned short var_13 = (unsigned short)34313;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)63257;
long long int var_16 = 5912247844138518403LL;
unsigned int var_17 = 3527312101U;
signed char var_18 = (signed char)-94;
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
