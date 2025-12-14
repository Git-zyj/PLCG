#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1361185218;
unsigned char var_11 = (unsigned char)249;
unsigned char var_12 = (unsigned char)102;
unsigned char var_13 = (unsigned char)28;
_Bool var_15 = (_Bool)0;
int var_16 = -200704809;
int zero = 0;
unsigned int var_18 = 3789931881U;
int var_19 = 1002374228;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
