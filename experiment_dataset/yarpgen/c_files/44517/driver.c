#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 964496071U;
signed char var_10 = (signed char)-74;
short var_11 = (short)-32516;
int var_12 = 749340766;
_Bool var_14 = (_Bool)0;
unsigned int var_18 = 44168983U;
int zero = 0;
unsigned int var_20 = 4167657443U;
long long int var_21 = 6544396979148000077LL;
short var_22 = (short)-6592;
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
