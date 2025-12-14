#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_5 = -6342016166683849304LL;
signed char var_6 = (signed char)39;
unsigned char var_7 = (unsigned char)79;
unsigned short var_12 = (unsigned short)44624;
short var_13 = (short)3310;
signed char var_17 = (signed char)-48;
int zero = 0;
unsigned int var_20 = 2396235989U;
unsigned int var_21 = 2790150262U;
signed char var_22 = (signed char)-25;
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
