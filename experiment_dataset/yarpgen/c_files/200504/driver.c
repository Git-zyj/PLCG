#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-30962;
long long int var_4 = 1079957354606806963LL;
unsigned int var_5 = 468036538U;
unsigned char var_7 = (unsigned char)97;
unsigned int var_11 = 20095224U;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)25989;
long long int var_14 = -2184693819262286725LL;
signed char var_15 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
