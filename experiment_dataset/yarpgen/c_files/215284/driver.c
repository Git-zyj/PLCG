#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5958888314124024042LL;
unsigned long long int var_3 = 15390563669786998547ULL;
short var_8 = (short)16534;
int zero = 0;
unsigned char var_12 = (unsigned char)116;
signed char var_13 = (signed char)-41;
long long int var_14 = -6435090877752115097LL;
signed char var_15 = (signed char)85;
short var_16 = (short)20079;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
