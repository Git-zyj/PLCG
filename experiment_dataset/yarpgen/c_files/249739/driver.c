#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = 1725619261;
signed char var_4 = (signed char)3;
unsigned short var_9 = (unsigned short)58416;
short var_10 = (short)25235;
signed char var_11 = (signed char)100;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-58;
unsigned short var_17 = (unsigned short)24850;
void init() {
}

void checksum() {
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
