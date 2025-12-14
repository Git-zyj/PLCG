#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-119;
unsigned short var_11 = (unsigned short)33671;
unsigned int var_14 = 3530883906U;
int zero = 0;
unsigned int var_19 = 2093034375U;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)4456;
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
