#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2170503481U;
unsigned int var_6 = 3217825880U;
long long int var_9 = 2931176839906194593LL;
unsigned short var_10 = (unsigned short)42366;
unsigned int var_13 = 1561429516U;
int zero = 0;
int var_17 = 1211011147;
int var_18 = 1039230019;
void init() {
}

void checksum() {
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
