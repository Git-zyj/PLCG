#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2332692076143600450LL;
unsigned int var_2 = 426517377U;
unsigned int var_3 = 1872205061U;
int var_8 = 1256120273;
long long int var_9 = 4044478138943411868LL;
int var_12 = -548837693;
int zero = 0;
unsigned short var_13 = (unsigned short)51118;
long long int var_14 = -4185487665158108968LL;
long long int var_15 = 6956040296981487112LL;
unsigned short var_16 = (unsigned short)30654;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
