#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 881516417U;
short var_2 = (short)-22868;
unsigned long long int var_6 = 15343164738249526909ULL;
long long int var_9 = 5716291948800738265LL;
unsigned char var_10 = (unsigned char)150;
int zero = 0;
unsigned char var_14 = (unsigned char)155;
long long int var_15 = -1227337829217601178LL;
void init() {
}

void checksum() {
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
