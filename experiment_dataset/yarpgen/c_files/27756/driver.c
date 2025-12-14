#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1846352396U;
signed char var_3 = (signed char)65;
signed char var_5 = (signed char)68;
int var_6 = -478691963;
short var_8 = (short)-1440;
int zero = 0;
unsigned char var_11 = (unsigned char)174;
long long int var_12 = 6852131442728254901LL;
int var_13 = -2082413962;
int var_14 = 1970343248;
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
