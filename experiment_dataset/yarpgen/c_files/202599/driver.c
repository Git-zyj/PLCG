#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1020;
long long int var_7 = -555933078531565172LL;
unsigned int var_12 = 2675403738U;
unsigned int var_14 = 486767351U;
unsigned int var_17 = 2595649200U;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)101;
short var_20 = (short)-9744;
signed char var_21 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
