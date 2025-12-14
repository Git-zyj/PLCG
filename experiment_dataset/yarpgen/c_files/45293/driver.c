#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1568378678;
short var_1 = (short)-11685;
long long int var_2 = 2925354514019786296LL;
unsigned char var_11 = (unsigned char)207;
int zero = 0;
short var_12 = (short)25108;
_Bool var_13 = (_Bool)1;
long long int var_14 = -1238824755052891147LL;
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
