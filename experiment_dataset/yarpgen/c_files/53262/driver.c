#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)51849;
unsigned int var_14 = 2060320639U;
short var_16 = (short)-21688;
int zero = 0;
unsigned short var_19 = (unsigned short)37304;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)60;
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
