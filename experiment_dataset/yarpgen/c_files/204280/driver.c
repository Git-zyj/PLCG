#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)26000;
unsigned short var_5 = (unsigned short)41193;
int var_7 = 1989882922;
short var_9 = (short)-11379;
short var_10 = (short)-17901;
unsigned int var_12 = 4227720924U;
int var_15 = -330955011;
int zero = 0;
unsigned int var_20 = 1249112087U;
unsigned int var_21 = 1673807538U;
void init() {
}

void checksum() {
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
