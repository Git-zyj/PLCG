#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7405663370531908927LL;
long long int var_9 = -8420206263191349187LL;
unsigned short var_10 = (unsigned short)28961;
int zero = 0;
int var_17 = -1766923693;
unsigned int var_18 = 2953727394U;
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
