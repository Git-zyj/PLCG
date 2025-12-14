#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2433074706U;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-31791;
signed char var_12 = (signed char)-32;
int zero = 0;
unsigned char var_19 = (unsigned char)86;
long long int var_20 = -7405553546756810738LL;
unsigned long long int var_21 = 9613461619925893291ULL;
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
