#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1453232556;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)0;
long long int var_16 = -3346375677359995362LL;
int zero = 0;
unsigned int var_20 = 2173268060U;
signed char var_21 = (signed char)-74;
long long int var_22 = -4284198235369917728LL;
unsigned short var_23 = (unsigned short)54789;
void init() {
}

void checksum() {
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
