#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 14432295773444898897ULL;
long long int var_12 = 2455358564895764395LL;
signed char var_13 = (signed char)(-127 - 1);
int zero = 0;
signed char var_15 = (signed char)-8;
unsigned char var_16 = (unsigned char)4;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
