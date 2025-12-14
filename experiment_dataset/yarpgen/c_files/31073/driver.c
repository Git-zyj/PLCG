#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2163861085U;
signed char var_8 = (signed char)-60;
int var_9 = 473210587;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-8960;
long long int var_12 = -2155655375953603904LL;
unsigned int var_13 = 3827060527U;
unsigned char var_14 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
