#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1013847435;
int var_2 = 450398740;
int var_7 = -748428405;
signed char var_12 = (signed char)-94;
int var_13 = 796668880;
unsigned short var_15 = (unsigned short)37175;
int zero = 0;
unsigned int var_17 = 1363868492U;
int var_18 = -1703891317;
short var_19 = (short)11992;
int var_20 = 766553643;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
