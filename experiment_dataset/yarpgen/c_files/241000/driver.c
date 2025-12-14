#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51976;
short var_2 = (short)17984;
unsigned short var_5 = (unsigned short)6407;
short var_6 = (short)31217;
short var_8 = (short)-17463;
short var_9 = (short)-9030;
short var_10 = (short)24026;
int zero = 0;
short var_11 = (short)15528;
short var_12 = (short)10699;
short var_13 = (short)14131;
unsigned short var_14 = (unsigned short)5472;
unsigned short var_15 = (unsigned short)58467;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
