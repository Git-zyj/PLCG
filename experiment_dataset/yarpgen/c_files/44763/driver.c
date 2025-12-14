#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
int var_2 = 1490676110;
unsigned int var_3 = 2625373626U;
unsigned char var_6 = (unsigned char)94;
unsigned char var_12 = (unsigned char)200;
int zero = 0;
unsigned int var_13 = 3470719995U;
int var_14 = -1585848616;
long long int var_15 = -3113821361774896783LL;
int var_16 = 2050586918;
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
