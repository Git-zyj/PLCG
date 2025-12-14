#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 717610132U;
long long int var_2 = -7404751329857024847LL;
long long int var_4 = -8375689081130713906LL;
int var_7 = -960622655;
unsigned int var_15 = 3892737499U;
int zero = 0;
short var_16 = (short)29296;
unsigned short var_17 = (unsigned short)60459;
unsigned int var_18 = 707742746U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
