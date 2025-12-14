#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-9713;
int var_4 = 109448531;
unsigned long long int var_10 = 1425501623833714113ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)82;
unsigned int var_21 = 215886249U;
unsigned short var_22 = (unsigned short)45165;
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
