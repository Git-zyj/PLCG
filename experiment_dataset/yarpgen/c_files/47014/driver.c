#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-21305;
long long int var_8 = -1798202192744153197LL;
long long int var_14 = -4528573153353093818LL;
short var_17 = (short)31382;
int var_18 = 1741305290;
int zero = 0;
int var_19 = -948356388;
short var_20 = (short)-2086;
int var_21 = -1460584761;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
