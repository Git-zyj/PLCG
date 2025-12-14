#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6430;
long long int var_5 = 6681063116770361706LL;
unsigned int var_6 = 4076165588U;
unsigned int var_9 = 2893516376U;
int zero = 0;
unsigned short var_12 = (unsigned short)41993;
signed char var_13 = (signed char)36;
_Bool var_14 = (_Bool)1;
long long int var_15 = 321221808962098173LL;
unsigned long long int var_16 = 9226516746906051994ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
