#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14279;
unsigned char var_8 = (unsigned char)221;
unsigned int var_11 = 3905245497U;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-3;
int var_14 = 1154221883;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
