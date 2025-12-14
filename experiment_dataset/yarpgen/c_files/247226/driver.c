#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
unsigned int var_1 = 2113327911U;
unsigned int var_2 = 1197412653U;
unsigned int var_4 = 2256316251U;
int var_7 = 1712028617;
short var_8 = (short)31053;
int zero = 0;
unsigned int var_13 = 600014417U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
