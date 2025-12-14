#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
short var_3 = (short)-23821;
short var_4 = (short)-16169;
unsigned int var_5 = 2774762066U;
int var_8 = 93638205;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)-12598;
unsigned char var_11 = (unsigned char)147;
signed char var_12 = (signed char)52;
unsigned int var_13 = 694447204U;
unsigned long long int var_14 = 12888397908122814407ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
