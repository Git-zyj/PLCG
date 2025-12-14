#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8804012497538627963LL;
short var_4 = (short)-4222;
unsigned int var_8 = 3258693529U;
unsigned char var_12 = (unsigned char)13;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)-27751;
signed char var_15 = (signed char)123;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
