#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13780;
int var_5 = -161988889;
int var_9 = -1008648169;
unsigned int var_11 = 3009753738U;
unsigned int var_15 = 2727443802U;
int zero = 0;
unsigned int var_16 = 2695462147U;
long long int var_17 = -246540342524662307LL;
int var_18 = 555390766;
long long int var_19 = 6432055506927155924LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
