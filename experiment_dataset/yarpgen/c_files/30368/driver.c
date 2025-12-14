#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8830155270221079954LL;
unsigned char var_13 = (unsigned char)169;
unsigned char var_15 = (unsigned char)140;
signed char var_17 = (signed char)-81;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 229999779U;
void init() {
}

void checksum() {
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
