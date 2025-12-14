#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13647;
unsigned long long int var_13 = 9114897910349177359ULL;
long long int var_14 = -1119540372375111457LL;
int zero = 0;
signed char var_17 = (signed char)-64;
long long int var_18 = 2276997395492277280LL;
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
