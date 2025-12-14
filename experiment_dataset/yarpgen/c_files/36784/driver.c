#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_13 = (short)-13097;
int var_14 = -404694292;
unsigned long long int var_17 = 7826428790448087346ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)37;
short var_21 = (short)-20570;
int var_22 = -492061355;
short var_23 = (short)-6635;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
