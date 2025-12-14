#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9133395202286112185ULL;
short var_2 = (short)621;
unsigned int var_6 = 845032023U;
unsigned long long int var_8 = 4529124243064183026ULL;
int zero = 0;
unsigned long long int var_12 = 6249500191554320057ULL;
int var_13 = -776548378;
long long int var_14 = 199075079968284165LL;
short var_15 = (short)15739;
void init() {
}

void checksum() {
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
