#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_7 = 355076577;
int var_8 = 1689613749;
unsigned short var_9 = (unsigned short)45572;
unsigned short var_10 = (unsigned short)17839;
int zero = 0;
unsigned short var_11 = (unsigned short)5480;
signed char var_12 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
