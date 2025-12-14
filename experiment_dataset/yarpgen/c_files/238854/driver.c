#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 251039145U;
int var_4 = -52364339;
signed char var_5 = (signed char)-50;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)11323;
long long int var_17 = 8432075301853227539LL;
short var_18 = (short)10151;
long long int var_19 = 5279728261653630814LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
