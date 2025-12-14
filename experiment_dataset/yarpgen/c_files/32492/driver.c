#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)60790;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 1039846403U;
unsigned short var_14 = (unsigned short)54579;
int zero = 0;
int var_15 = 1151819609;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)25491;
void init() {
}

void checksum() {
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
