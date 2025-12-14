#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 3851205860U;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)35;
signed char var_7 = (signed char)30;
signed char var_9 = (signed char)-21;
int zero = 0;
signed char var_10 = (signed char)-79;
short var_11 = (short)-16615;
int var_12 = 876154954;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
