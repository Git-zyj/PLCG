#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 810260588;
int var_4 = 1601353557;
short var_6 = (short)-20406;
short var_8 = (short)30839;
int var_10 = -1540227804;
unsigned int var_11 = 2021865448U;
int zero = 0;
int var_13 = -563642756;
unsigned long long int var_14 = 11441067850677670137ULL;
short var_15 = (short)4022;
long long int var_16 = -3212628712476561446LL;
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
