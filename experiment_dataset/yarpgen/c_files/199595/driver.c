#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
unsigned char var_2 = (unsigned char)79;
unsigned char var_8 = (unsigned char)56;
unsigned short var_10 = (unsigned short)15511;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)1876;
unsigned char var_17 = (unsigned char)156;
unsigned int var_18 = 4266726809U;
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
