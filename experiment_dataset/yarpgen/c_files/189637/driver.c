#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-112;
short var_2 = (short)20161;
unsigned long long int var_4 = 5829336097492792714ULL;
short var_8 = (short)22681;
unsigned int var_12 = 4229126734U;
short var_16 = (short)22784;
int zero = 0;
short var_17 = (short)22184;
unsigned int var_18 = 3773982885U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
