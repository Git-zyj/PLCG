#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)63;
unsigned short var_6 = (unsigned short)57998;
signed char var_7 = (signed char)-97;
signed char var_11 = (signed char)-88;
unsigned int var_12 = 1152592859U;
signed char var_15 = (signed char)-123;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 2018506974U;
long long int var_18 = 7899845110164050994LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
