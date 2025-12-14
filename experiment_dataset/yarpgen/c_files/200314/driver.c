#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
unsigned long long int var_6 = 3075754150925819894ULL;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-119;
short var_13 = (short)-1656;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 490203838U;
unsigned int var_16 = 1348607839U;
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
