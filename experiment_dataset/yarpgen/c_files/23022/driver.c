#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 516829422U;
unsigned long long int var_1 = 15593911185010998434ULL;
signed char var_2 = (signed char)119;
_Bool var_4 = (_Bool)0;
long long int var_8 = 6919885735447111999LL;
int var_9 = -1793372629;
unsigned int var_10 = 1975956614U;
int zero = 0;
long long int var_12 = -3369710542765982447LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -1661180388772153275LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
