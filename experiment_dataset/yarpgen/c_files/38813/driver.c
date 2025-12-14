#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2102808267U;
signed char var_2 = (signed char)-52;
signed char var_4 = (signed char)18;
int var_8 = 1753097701;
signed char var_11 = (signed char)43;
unsigned int var_12 = 1803430156U;
int zero = 0;
signed char var_15 = (signed char)-15;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
