#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21947;
short var_2 = (short)-472;
unsigned short var_6 = (unsigned short)48583;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 9975764901417037720ULL;
unsigned int var_15 = 1026607924U;
unsigned long long int var_16 = 3824735269130268322ULL;
signed char var_17 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
