#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29422;
signed char var_1 = (signed char)83;
signed char var_3 = (signed char)116;
signed char var_6 = (signed char)-60;
unsigned char var_13 = (unsigned char)32;
unsigned long long int var_14 = 4578218823648445678ULL;
unsigned int var_17 = 3347526227U;
int zero = 0;
long long int var_19 = 2046724218567981954LL;
signed char var_20 = (signed char)116;
short var_21 = (short)-31791;
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
