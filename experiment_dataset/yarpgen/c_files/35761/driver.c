#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25274;
unsigned short var_8 = (unsigned short)55576;
int zero = 0;
unsigned int var_12 = 1025492228U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)16832;
unsigned int var_15 = 354828208U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
