#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1399615491;
unsigned short var_9 = (unsigned short)20183;
int var_10 = -1915094081;
long long int var_11 = 5836617831521025857LL;
int zero = 0;
unsigned short var_12 = (unsigned short)31579;
unsigned short var_13 = (unsigned short)47969;
unsigned int var_14 = 2072130115U;
unsigned short var_15 = (unsigned short)9978;
unsigned char var_16 = (unsigned char)220;
long long int var_17 = 2817423822184510078LL;
int var_18 = 160351923;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
