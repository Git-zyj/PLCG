#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14690;
unsigned int var_2 = 786605832U;
unsigned char var_3 = (unsigned char)178;
short var_4 = (short)30026;
signed char var_7 = (signed char)103;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)3804;
unsigned long long int var_16 = 8134830543119055047ULL;
short var_17 = (short)21220;
unsigned long long int var_19 = 17504106288944021795ULL;
int zero = 0;
short var_20 = (short)21759;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-3;
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
