#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8669102829712440125LL;
short var_4 = (short)-1033;
long long int var_5 = -8523311294619227074LL;
signed char var_6 = (signed char)-39;
unsigned short var_10 = (unsigned short)3881;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)56996;
int zero = 0;
int var_14 = -962420377;
int var_15 = 1066712623;
unsigned int var_16 = 1966928511U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
