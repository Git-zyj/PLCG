#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
signed char var_2 = (signed char)-68;
short var_3 = (short)-6679;
short var_4 = (short)8628;
signed char var_6 = (signed char)59;
signed char var_8 = (signed char)120;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 244636862U;
unsigned char var_14 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
