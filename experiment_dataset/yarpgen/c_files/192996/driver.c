#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3884970427796707966LL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)58425;
unsigned short var_12 = (unsigned short)43902;
long long int var_15 = -8568437070363891604LL;
int zero = 0;
unsigned short var_16 = (unsigned short)51990;
unsigned long long int var_17 = 6064489671635101978ULL;
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
