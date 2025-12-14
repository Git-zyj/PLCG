#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5525051317234905918LL;
short var_3 = (short)-584;
signed char var_4 = (signed char)-92;
_Bool var_5 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 3112085464U;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)51044;
void init() {
}

void checksum() {
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
