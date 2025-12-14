#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
long long int var_9 = 6033057804337177674LL;
unsigned short var_11 = (unsigned short)40008;
signed char var_14 = (signed char)-51;
int zero = 0;
short var_20 = (short)4500;
signed char var_21 = (signed char)-4;
void init() {
}

void checksum() {
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
