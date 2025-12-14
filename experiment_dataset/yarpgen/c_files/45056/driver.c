#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7081831919839444309LL;
signed char var_10 = (signed char)-99;
unsigned int var_14 = 2223218094U;
int zero = 0;
int var_15 = 1564163283;
int var_16 = -590948493;
unsigned char var_17 = (unsigned char)181;
int var_18 = 1281679466;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
