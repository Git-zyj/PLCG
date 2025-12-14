#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 458102882612936057ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)36333;
unsigned long long int var_7 = 5711135383437824051ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_13 = 15092548428228567144ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
