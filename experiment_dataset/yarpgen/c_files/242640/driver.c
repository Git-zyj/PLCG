#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1533596408;
long long int var_3 = 5390563564946842263LL;
short var_6 = (short)-23785;
int zero = 0;
unsigned char var_12 = (unsigned char)88;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)27;
void init() {
}

void checksum() {
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
