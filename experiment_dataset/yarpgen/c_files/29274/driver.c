#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4257263993U;
unsigned short var_12 = (unsigned short)45270;
short var_15 = (short)25924;
short var_18 = (short)12879;
unsigned int var_19 = 1642854497U;
int zero = 0;
unsigned int var_20 = 1101452799U;
short var_21 = (short)3273;
short var_22 = (short)13813;
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
