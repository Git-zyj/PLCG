#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)110;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 14313479814675579231ULL;
short var_9 = (short)1070;
int zero = 0;
int var_11 = 314899619;
short var_12 = (short)-31006;
unsigned long long int var_13 = 2471601553573788176ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
