#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-32;
_Bool var_8 = (_Bool)0;
short var_14 = (short)-2383;
unsigned int var_15 = 1235413161U;
int zero = 0;
short var_19 = (short)12831;
int var_20 = 269212448;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 10915168585837370478ULL;
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
