#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19596;
unsigned long long int var_1 = 206614367094062240ULL;
long long int var_2 = 8516933565504714963LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_15 = (short)31951;
long long int var_16 = -5170088879940710099LL;
long long int var_17 = 1270523285972743861LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
