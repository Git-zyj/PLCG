#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)3172;
signed char var_5 = (signed char)3;
int var_7 = -1581343050;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-11;
short var_11 = (short)-28134;
int zero = 0;
short var_12 = (short)-32611;
signed char var_13 = (signed char)18;
short var_14 = (short)-16624;
long long int var_15 = -6733029075912856303LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
