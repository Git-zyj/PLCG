#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-69;
unsigned int var_4 = 1688080636U;
short var_8 = (short)21780;
unsigned long long int var_12 = 16272504815322894704ULL;
unsigned short var_15 = (unsigned short)35462;
int zero = 0;
signed char var_18 = (signed char)-101;
signed char var_19 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
