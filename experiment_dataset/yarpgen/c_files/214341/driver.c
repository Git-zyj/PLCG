#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3812426951U;
short var_2 = (short)-9574;
unsigned long long int var_6 = 12606295356941822796ULL;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-8348;
signed char var_12 = (signed char)101;
int zero = 0;
signed char var_16 = (signed char)-3;
unsigned int var_17 = 4025397707U;
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
