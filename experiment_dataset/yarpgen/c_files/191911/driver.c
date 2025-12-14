#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)150;
signed char var_6 = (signed char)42;
int var_10 = -139536330;
long long int var_11 = 3544792674982257074LL;
int zero = 0;
unsigned char var_13 = (unsigned char)195;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)186;
_Bool var_16 = (_Bool)1;
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
