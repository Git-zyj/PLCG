#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 466421084U;
unsigned int var_3 = 2147557147U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
long long int var_15 = -2139503169676817741LL;
unsigned char var_17 = (unsigned char)72;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 5287824143534849027LL;
unsigned short var_21 = (unsigned short)41;
void init() {
}

void checksum() {
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
