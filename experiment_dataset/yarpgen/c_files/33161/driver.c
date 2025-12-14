#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55778;
signed char var_3 = (signed char)52;
int var_5 = -423712596;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_9 = 5170864789758038896LL;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)64653;
signed char var_19 = (signed char)49;
int zero = 0;
long long int var_20 = 3058480679708112867LL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)41478;
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
