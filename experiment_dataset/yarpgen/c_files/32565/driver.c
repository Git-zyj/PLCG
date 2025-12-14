#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 785863120;
unsigned long long int var_7 = 13856007459020410536ULL;
unsigned short var_8 = (unsigned short)54460;
unsigned int var_9 = 2202807000U;
_Bool var_12 = (_Bool)0;
signed char var_15 = (signed char)-48;
int zero = 0;
unsigned short var_20 = (unsigned short)57549;
short var_21 = (short)-13028;
signed char var_22 = (signed char)-41;
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
