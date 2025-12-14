#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2462829759344736150LL;
int var_4 = 1379131574;
_Bool var_7 = (_Bool)0;
unsigned char var_12 = (unsigned char)101;
int zero = 0;
long long int var_20 = 752175716528437874LL;
unsigned int var_21 = 1418667716U;
unsigned long long int var_22 = 13798550428992711494ULL;
unsigned char var_23 = (unsigned char)49;
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
