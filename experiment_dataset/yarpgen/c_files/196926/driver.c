#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -477632634;
unsigned int var_1 = 3473961591U;
short var_9 = (short)-18135;
short var_12 = (short)-24348;
int zero = 0;
long long int var_16 = -7241461148797300965LL;
unsigned long long int var_17 = 16509370458855914805ULL;
short var_18 = (short)4739;
long long int var_19 = -9155036944313118291LL;
unsigned long long int var_20 = 9146156562543936251ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
