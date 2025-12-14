#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -52608384;
unsigned short var_9 = (unsigned short)11276;
int var_11 = 554041630;
long long int var_13 = -8104299172665173782LL;
int zero = 0;
unsigned int var_14 = 3977369662U;
int var_15 = 1855056934;
int var_16 = -757948199;
void init() {
}

void checksum() {
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
