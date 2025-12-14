#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43352;
unsigned int var_1 = 1133125415U;
short var_5 = (short)-19665;
signed char var_7 = (signed char)79;
signed char var_11 = (signed char)0;
_Bool var_13 = (_Bool)0;
int var_16 = -1536270655;
int zero = 0;
signed char var_20 = (signed char)37;
int var_21 = -264968331;
long long int var_22 = 2110912769759021556LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
