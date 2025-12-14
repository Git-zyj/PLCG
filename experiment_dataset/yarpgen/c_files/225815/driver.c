#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29299;
unsigned char var_1 = (unsigned char)186;
int var_3 = -1707473560;
signed char var_6 = (signed char)-31;
unsigned char var_12 = (unsigned char)31;
unsigned int var_13 = 3117148659U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2059904504U;
void init() {
}

void checksum() {
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
