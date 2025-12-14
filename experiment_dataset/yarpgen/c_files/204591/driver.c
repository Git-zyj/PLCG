#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)31600;
unsigned long long int var_10 = 8474470539428210563ULL;
unsigned int var_12 = 3405872187U;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)33;
short var_20 = (short)6715;
unsigned short var_21 = (unsigned short)51981;
long long int var_22 = 962662664907304955LL;
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
