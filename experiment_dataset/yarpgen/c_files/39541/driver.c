#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 542615135;
long long int var_3 = -7588649869578342058LL;
long long int var_8 = 4806499917587369997LL;
unsigned long long int var_12 = 1274258207965734073ULL;
int var_13 = -1101240962;
int zero = 0;
unsigned int var_15 = 4166134627U;
unsigned short var_16 = (unsigned short)38515;
long long int var_17 = 855065006591739636LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
