#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -313082418;
short var_3 = (short)7534;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)66;
int var_19 = 696567659;
int zero = 0;
unsigned short var_20 = (unsigned short)37525;
int var_21 = 17852959;
void init() {
}

void checksum() {
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
