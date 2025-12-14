#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1105368881U;
unsigned long long int var_8 = 13748576252876936290ULL;
unsigned short var_14 = (unsigned short)7974;
int zero = 0;
signed char var_19 = (signed char)3;
short var_20 = (short)22382;
unsigned short var_21 = (unsigned short)28974;
_Bool var_22 = (_Bool)0;
short var_23 = (short)10419;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
