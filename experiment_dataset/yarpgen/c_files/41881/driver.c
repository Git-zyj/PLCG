#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10316;
unsigned short var_6 = (unsigned short)47828;
int var_9 = 157884615;
int zero = 0;
unsigned int var_11 = 162548256U;
unsigned long long int var_12 = 14067248875822630178ULL;
short var_13 = (short)-6356;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
