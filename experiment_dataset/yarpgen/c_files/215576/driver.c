#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)64;
long long int var_3 = 7541823886654485273LL;
signed char var_9 = (signed char)31;
signed char var_13 = (signed char)-16;
int zero = 0;
int var_14 = -1005113681;
int var_15 = -734134466;
short var_16 = (short)6076;
unsigned long long int var_17 = 16421201783165055788ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
