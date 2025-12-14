#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5832;
unsigned int var_2 = 32858148U;
unsigned short var_6 = (unsigned short)4269;
long long int var_9 = -8756544703382207877LL;
int zero = 0;
int var_11 = 1976547195;
unsigned short var_12 = (unsigned short)59534;
short var_13 = (short)-13405;
unsigned short var_14 = (unsigned short)14453;
void init() {
}

void checksum() {
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
