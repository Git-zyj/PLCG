#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3671563328U;
long long int var_6 = 2730344918306320307LL;
unsigned long long int var_15 = 10585813237779157963ULL;
int zero = 0;
short var_17 = (short)15918;
long long int var_18 = 1248613850438151042LL;
long long int var_19 = 3393633558440177815LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
