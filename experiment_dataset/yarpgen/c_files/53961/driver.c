#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32599;
unsigned int var_2 = 915502920U;
unsigned short var_3 = (unsigned short)58797;
unsigned long long int var_4 = 10205127363710921297ULL;
unsigned short var_5 = (unsigned short)60719;
signed char var_7 = (signed char)56;
int var_9 = -1757588420;
int zero = 0;
unsigned int var_10 = 3544580148U;
int var_11 = 1676157491;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
