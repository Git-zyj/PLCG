#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65382;
unsigned int var_5 = 1684240447U;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)17536;
int zero = 0;
unsigned int var_11 = 1437285146U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
