#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3091386883U;
unsigned int var_2 = 439191573U;
short var_12 = (short)29932;
unsigned short var_17 = (unsigned short)37314;
int zero = 0;
unsigned int var_18 = 1107520450U;
unsigned int var_19 = 3451304102U;
unsigned int var_20 = 1627056735U;
long long int var_21 = -5564002564952972234LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
