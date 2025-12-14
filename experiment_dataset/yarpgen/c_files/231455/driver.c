#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11452;
long long int var_1 = 4601193559881929808LL;
unsigned int var_3 = 2097138054U;
short var_6 = (short)6844;
unsigned short var_12 = (unsigned short)13569;
unsigned int var_16 = 317566272U;
int zero = 0;
unsigned int var_18 = 800712645U;
unsigned short var_19 = (unsigned short)347;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
