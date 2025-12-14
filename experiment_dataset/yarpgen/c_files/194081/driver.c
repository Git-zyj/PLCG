#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
unsigned int var_1 = 2916985893U;
long long int var_2 = -844715774249045947LL;
unsigned long long int var_3 = 8640405058199157758ULL;
signed char var_5 = (signed char)-69;
signed char var_9 = (signed char)-73;
signed char var_10 = (signed char)-16;
int zero = 0;
short var_11 = (short)13135;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
