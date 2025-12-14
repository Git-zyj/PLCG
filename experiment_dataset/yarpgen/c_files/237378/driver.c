#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14127896426479264118ULL;
short var_1 = (short)-3886;
short var_7 = (short)8924;
short var_11 = (short)-21355;
unsigned int var_18 = 141083074U;
int zero = 0;
signed char var_19 = (signed char)-19;
unsigned long long int var_20 = 10126110903041000034ULL;
unsigned short var_21 = (unsigned short)63802;
unsigned int var_22 = 136176542U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
