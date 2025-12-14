#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1016330694U;
unsigned short var_1 = (unsigned short)21695;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)151;
unsigned int var_10 = 2620098823U;
short var_12 = (short)-16335;
unsigned int var_14 = 3504556039U;
short var_15 = (short)13946;
int zero = 0;
signed char var_18 = (signed char)-23;
unsigned short var_19 = (unsigned short)42782;
long long int var_20 = 1725091918659423261LL;
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
