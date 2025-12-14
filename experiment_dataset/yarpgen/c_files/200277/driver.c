#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)-13;
signed char var_10 = (signed char)-89;
unsigned int var_11 = 4225670089U;
unsigned short var_12 = (unsigned short)43925;
int zero = 0;
short var_13 = (short)-24134;
short var_14 = (short)2618;
int var_15 = 2130763381;
void init() {
}

void checksum() {
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
