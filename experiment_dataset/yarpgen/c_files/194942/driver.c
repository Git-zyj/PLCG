#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57384;
unsigned short var_9 = (unsigned short)42214;
long long int var_10 = 2788745322277176534LL;
long long int var_11 = -7909623562367409425LL;
int zero = 0;
signed char var_20 = (signed char)-111;
signed char var_21 = (signed char)-91;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2858574045U;
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
