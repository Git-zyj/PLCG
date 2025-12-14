#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54931;
unsigned short var_1 = (unsigned short)19077;
unsigned short var_2 = (unsigned short)8461;
int var_11 = 1668795695;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)63574;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
