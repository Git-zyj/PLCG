#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 517301998;
signed char var_5 = (signed char)-44;
unsigned long long int var_9 = 18313247089963965674ULL;
int zero = 0;
unsigned long long int var_16 = 11405174293444082945ULL;
long long int var_17 = 7201454718680116065LL;
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
