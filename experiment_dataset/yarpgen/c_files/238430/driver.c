#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1496647518U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 2242043601096650939ULL;
int var_9 = 1447437046;
signed char var_12 = (signed char)2;
signed char var_14 = (signed char)-23;
signed char var_16 = (signed char)-67;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -7657311160775283714LL;
unsigned char var_21 = (unsigned char)42;
long long int var_22 = 6338844286537337044LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
