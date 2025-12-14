#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26811;
long long int var_3 = -2702859929557406282LL;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)77;
short var_8 = (short)-6826;
int zero = 0;
unsigned int var_11 = 3545398574U;
int var_12 = -2009621780;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
