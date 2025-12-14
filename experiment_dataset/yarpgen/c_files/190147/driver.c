#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5757350347000582924ULL;
signed char var_9 = (signed char)-92;
short var_12 = (short)22745;
int zero = 0;
signed char var_15 = (signed char)-66;
unsigned long long int var_16 = 13685886626466340518ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
