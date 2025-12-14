#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3293176894U;
long long int var_3 = -3030749301105376317LL;
unsigned char var_7 = (unsigned char)70;
int zero = 0;
signed char var_10 = (signed char)-59;
short var_11 = (short)10801;
signed char var_12 = (signed char)33;
unsigned int var_13 = 2803715823U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
