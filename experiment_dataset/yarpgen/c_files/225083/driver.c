#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10594;
long long int var_5 = 8433381839581490637LL;
unsigned short var_6 = (unsigned short)36041;
long long int var_8 = -5625440461328960030LL;
int zero = 0;
unsigned long long int var_10 = 7186447519440127318ULL;
short var_11 = (short)-28209;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
