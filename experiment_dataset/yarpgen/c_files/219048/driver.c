#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_5 = 1109993800U;
unsigned int var_6 = 2475245236U;
unsigned int var_7 = 1717295872U;
signed char var_9 = (signed char)51;
int var_12 = -1787248881;
short var_13 = (short)-23963;
unsigned int var_16 = 4111978779U;
int zero = 0;
short var_18 = (short)-22568;
signed char var_19 = (signed char)-104;
void init() {
}

void checksum() {
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
