#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 973231574U;
int var_6 = -509378288;
unsigned int var_8 = 2445282995U;
_Bool var_10 = (_Bool)1;
unsigned int var_17 = 3270340108U;
int zero = 0;
unsigned char var_19 = (unsigned char)58;
unsigned int var_20 = 3551553768U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
