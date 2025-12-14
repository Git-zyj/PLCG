#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = -443262348;
short var_5 = (short)-31135;
_Bool var_6 = (_Bool)1;
short var_7 = (short)2986;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)248;
int var_11 = 181721106;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3298321277U;
unsigned int var_15 = 2604330696U;
int var_16 = -715240926;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
