#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30760;
signed char var_1 = (signed char)22;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2833918973U;
long long int var_6 = -7733663394804376579LL;
int var_7 = 1636492976;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = -2005865520;
unsigned int var_12 = 3135642643U;
int var_13 = 1920262701;
unsigned int var_14 = 357547252U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
