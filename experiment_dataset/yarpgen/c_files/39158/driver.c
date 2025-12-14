#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8739;
short var_1 = (short)-12755;
unsigned short var_2 = (unsigned short)29974;
int var_5 = 478029695;
long long int var_8 = 5190301413305227302LL;
short var_12 = (short)-8384;
short var_15 = (short)20821;
short var_19 = (short)-12614;
int zero = 0;
long long int var_20 = 3183271650680450309LL;
short var_21 = (short)22978;
short var_22 = (short)-14656;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
