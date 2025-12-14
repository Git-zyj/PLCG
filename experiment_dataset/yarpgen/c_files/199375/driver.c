#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4451;
long long int var_4 = -6293663591397789260LL;
long long int var_6 = -5070998166044446523LL;
int var_11 = 791671701;
int zero = 0;
int var_17 = 725049892;
unsigned short var_18 = (unsigned short)64435;
int var_19 = 332988869;
void init() {
}

void checksum() {
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
